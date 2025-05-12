#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <ctime>


using namespace std;

const long big[3] = {100000,1000000,10000000};

void test(long n);
int main()
{
    for(int i = 0; i < 3; i++)
    {
        test(big[i]);
    }
    cout << "Done!";

    return 0;
}

void test(long n)
{
    srand(time(0));
    vector<int> vi0(n);
    for(auto &x: vi0)
        x = rand() % 100 + 1; 
    vector<int> vi(vi0);
    list<int> li(n);
    copy(vi0.begin(),vi0.end(), li.begin());
    cout << "test elements " << n << endl;
    clock_t start = clock();
    sort(vi.begin(),vi.end());
    clock_t end = clock();
    cout << "Sort vi: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << "s." << endl;

    start = clock();
    li.sort();
    end = clock();
    cout << "Sort li: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << "s." << endl;

    sort(vi0.begin(), vi0.end());
    copy(vi0.begin(), vi0.end(), li.begin());
    start = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    cout << "Sort vi and copy to li: " << static_cast<double>(end - start) / CLOCKS_PER_SEC << "s." << endl;
}