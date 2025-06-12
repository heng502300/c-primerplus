#include<iostream>
#include "linkedlist.h"


int main()
{
    Linkedlist list;
    list.addAtHead(1);
    list.printLinkedlist();
    list.addAtHead(2);
    list.printLinkedlist();
    list.reverse();
    list.printLinkedlist();
    list.swap();
    list.printLinkedlist();

    list.removeNthFromEnd(1);
    list.printLinkedlist();
    // 你可以继续测试其它功能
    return 0;
}