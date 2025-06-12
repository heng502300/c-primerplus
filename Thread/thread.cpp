#include <iostream>
#include <thread>
#include <string>
#include <memory>
#include <mutex>
#include <condition_variable>
#include <queue>
using std::cout;    using std::endl;
using std::thread;

std::mutex g_mutex;
std::queue<int> g_queue;
std::condition_variable g_cv;
void producer()
{
    for (size_t i = 0; i < 10; i++)
    {
        {
            std::unique_lock<std::mutex> lock(g_mutex);
            g_queue.push(i);
            g_cv.notify_one();
            cout << "Producer : produced " << i << endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    
    
}


void consumer()
{
    while (1)
    {
        std::unique_lock<std::mutex> lock(g_mutex);
        g_cv.wait(lock,[](){
            return !g_queue.empty();
        });
        int value = g_queue.front();
        g_queue.pop();
        cout << "consumer: consumed " << value << endl;
    }
    
}



int main()
{
    thread producer_thread(producer);
    thread consumer_thread(consumer);
    producer_thread.join();
    consumer_thread.join();
    return 0;
}



// std::timed_mutex mtx;

// class Singleton
// {
// private:
//     Singleton () {}
//     Singleton (const Singleton&) = delete;
//     Singleton operator=(const Singleton&) = delete;
//     static void init()
//     {
//         m_instance.reset(new Singleton);
//     }
//     static std::once_flag m_onceFlag;
//     static std::unique_ptr<Singleton> m_instance;
//     int m_data = 0;
// public:
//     static Singleton& getInstance()
//     {
//         std::call_once(m_onceFlag, &Singleton::init);
//         return *m_instance;
//     }
//     void setData(int data)
//     {
//         m_data = data;  
//     }   
//     int getData() const {
//         return m_data;
//     }
    


// };


// int main()
// {

//     return 0;
// }

// int shared_data = 0;

// void func()
// {
//     for (size_t i = 0; i < 2; i++)
//     {
//         //mtx.lock(); 
//         //std::lock_guard<std::mutex> lg(mtx,std::adopt_lock);
//         std::unique_lock<std::timed_mutex> lg(mtx,std::defer_lock);
//         if(lg.try_lock_for(std::chrono::seconds(2)))
//         {
//             std::this_thread::sleep_for(std::chrono::seconds(1));
//             shared_data++;
//         }    
//             //cout << "Thread " << i << " increment " << shared_data << endl; 
//         //mtx.unlock();
//     }
    
// }

// void func1()
// {
//     for (size_t i = 0; i < 50; i++)
//     {
//         m1.lock();
//         m2.lock();
//         m1.unlock();
//         m2.unlock();
//     }
    
  
// }

// void func2()
// {
//      for (size_t i = 0; i < 50; i++)
//     {
//         m2.lock();
//         m1.lock();
//         m1.unlock();
//         m2.unlock();
//     }
// }

// int main()
// {
//     thread t1(func);
//     thread t2(func);
//     t1.join();
//     t2.join();
//     cout << "shrae_data" << shared_data << endl;
//     return 0;
// }
























// void foo(std::unique_ptr<int> ptr)
// {
//     //x += 1;
//     cout << *ptr << endl;
//     //delete ptr;
//     // std::cout << "Thread started" << std::endl;
// }
// class Myclass
// {
// public:
//       Myclass() {}
// private:
  
//     void func()
//     {
//         cout << "Thread" << std::this_thread::get_id()
//              << "started" << endl;

//         cout << "Thread" << std::this_thread::get_id()
//              << "finished" << endl;
//     }
//     friend void myThreadFunc(Myclass *obj);

// };

// void myThreadFunc(Myclass *obj)
// {
//     obj -> func();
// }

// int main()
// {
//     //std::shared_ptr<Myclass> obj = std::make_shared<Myclass> ();
//     //thread t(&Myclass::func,obj);
//     Myclass obj;
//     thread t1(myThreadFunc,&obj);
//     thread t2(myThreadFunc,&obj);
//     t1.join();
//     //int *i = new int(2);
//     // std::unique_ptr<int> i = std::make_unique<int> (1);
//     // thread t(foo, std::move(i));
//     // t.join();
//     // std::thread t(foo,std::ref(i));
//     // t.join();

//     // std::thread t(foo);
//     // if(t.joinable())
//     // {
//     //     t.join();
//     // }
//     // std::cout << "Thread joined" << std::endl;
//     return 0;
// }
