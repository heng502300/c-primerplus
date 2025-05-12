#include <iostream>
#include<string>

#include "queuetp.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    QueueTP<std::string> cs(5);
    std::string temp;
    while (!cs.isfull())
    {
        cout << "Please enter your name. You will be "
             << "served in the order of arrival.\n";
        cout << "name: ";
        getline(cin, temp);
        cs.enqueue(temp);       
    }
    cout << "The queue is full. Processing begins!\n";
    while (!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }
    cout << "Done!\n";
    return 0;
}