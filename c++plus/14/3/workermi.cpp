#include<iostream>
#include"workermi.h"

using namespace std;

Worker::~Worker() { }

//protected
void Worker::Data()  const 
{
    cout << "Name: " << fullname << endl;
    cout << "Enployee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin,fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while(cin.get() != '\n')
        continue;
}

//waiter method
void Waiter::set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::show() const
{
    cout << "Category: waiterr\n";
    Worker::Data();
    Data();
}

//protected
void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
    {
        continue;
    }
}

//Singer method

char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};
void Singer::set()
{
    cout << "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::show() const
{
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

//proteted
void Singer::Data() const
{
    cout << "Vacal range: " << pv[voice] << endl;
}

void Singer::Get() 
{
    cout << "Enter number or singer's vocal range: \n";
    int i;
    for (size_t i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3)
        {
            cout << endl;
        }
        if (i % 4 != 0)
            cout << '\n';
        cin >> voice;
        while (cin.get() != '\n')
        {
            continue;
        }
        
    }
    
}


//SingingWaiter
void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::set()
{
    cout << "Enter singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::show() const
{
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}
