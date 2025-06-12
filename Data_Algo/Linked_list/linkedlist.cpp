#include <iostream>
#include "linkedlist.h"
using std::cout;    using std::endl;



    int Linkedlist::get(int index) {
        if (index < 0 || index >= getCount())
            return -1;
        Node *current = dummy_head->next;
        while (index--)
            current = current->next;
        return current->data;
    }

    void Linkedlist::addAtHead(int val) {
        Node *NewNode = new Node(val);
        NewNode->next = dummy_head->next;
        dummy_head->next = NewNode;
        incrementCount();
    }

    void Linkedlist::addAtTail(int val) {
        Node *NewNode = new Node(val);
        Node *current = dummy_head;
        while (current->next != nullptr)
            current = current->next;
        current->next = NewNode;
        incrementCount();
    }

    void Linkedlist::addAtIndex(int index, int val) {
        if (index < 0 || index > getCount())
            return;
        Node *NewNode = new Node(val);
        Node *current = dummy_head;
        while (index--)
            current = current->next;
        NewNode->next = current->next;
        current->next = NewNode;
        incrementCount();
    }

    void Linkedlist::deleteAtIndex(int index) {
        if (index < 0 || index >= getCount())
            return;
        Node *current = dummy_head;
        while (index--)
            current = current->next;
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
        decrementCount();
    }

    // void Linkedlist::deleteNode(int val) {
    //     Node *current = head;
    //     while (current->next != nullptr) {
    //         if (current->next->data == val) {
    //             Node *temp = current->next;
    //             current->next = current->next->next;
    //             delete temp;
    //             decrementCount();
    //             return; // 只删除第一个匹配的节点
    //         }
    //         current = current->next;
    //     }
    // }

    void Linkedlist::reverse()
    {
        Node *cur = dummy_head ->next;
        Node *prev = nullptr;
        while (cur)
        {
            Node* temp = cur ->next;
            cur ->next = prev;
            prev = cur;
            cur = temp;
        }
        dummy_head->next = prev;
    }

    void Linkedlist::printLinkedlist() {
        if (dummy_head->next == nullptr) {
            cout << "Linkedlist is empty" << endl;
            return;
        }
        cout << "Linkedlist: ";
        Node *current = dummy_head->next;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void Linkedlist::swap()
    {
        Node* cur = dummy_head;
        while (cur->next != nullptr && cur->next->next != nullptr)
        {
            Node* first = cur->next;
            Node* second = cur->next->next;
            Node* nextPair = second->next;

            cur->next = second;
            second->next = first;
            first->next = nextPair;

            cur = first; // 前进到下一个待交换的节点
        }
    }

    void Linkedlist::removeNthFromEnd(int n)
    {
        Node* fast = dummy_head->next;
        Node* slow = dummy_head;
        for (int i = 0; i < n; i++)
        {
            fast = fast ->next;
        }
        while (fast)
        {
            fast = fast ->next;
            slow = slow ->next;
        }

        Node* temp = slow ->next;
        slow ->next = temp ->next;
        delete temp;
    }
