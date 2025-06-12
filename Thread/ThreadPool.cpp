#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>
#include <queue>
#include <functional>

using std::cout;    using std::endl;    using std::vector;  
using std::queue;   using std::thread;  using std::mutex;
using std::condition_variable;

class ThreadPool
{
private:
    vector<thread>  threads; 
    bool stop;
    queue <std::function<void()>> tasks;
    mutex mtx;
    condition_variable condition;
public:
    ThreadPool(int num) : stop(false)
    {
        for (size_t i = 0; i < num; i++)
        {
            threads.emplace_back([this] () {
                while (true)
                {
                    std::unique_lock<mutex> lock(mtx);
                    condition.wait(lock, [this](){
                        return stop || !tasks.empty();
                    });
                    std::function<void()> task(std::move(tasks.front()));
                    tasks.pop();
                    lock.unlock();
                    task();
                }
                
            });
        }
        
    }

    ~ThreadPool()
    {
        {
            std::unique_lock<mutex> lock(mtx);
            stop = true;
        }
        condition.notify_all();
        for(auto &thread: threads)
            thread.join();
    }

    template <typename T, typename... Args>
    void enqueue(T&& f, Args&&... args)
    {
        std::function<void()> task = std::bind(std::forward<T> (f), std::forward<Args> (args) ...);
        {
            std::unique_lock<mutex> lock(mtx);
            tasks.emplace(std::move(task));
        }
             condition.notify_one();
    }
};





int main()
{
    ThreadPool pool(4);
    for (size_t i = 0; i < 8; i++)
    {
        pool.enqueue([i] () {
            cout << "Task " << i << " is running in thread " << endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "Task " << i << " is done" << endl;
        });
    }
    
    return 0;
}