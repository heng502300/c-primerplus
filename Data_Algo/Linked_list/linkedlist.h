#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Linkedlist
{
private:
    struct Node
    {
        int data;
        Node *next;
        Node(int x) : data(x) , next(nullptr) {}
    };
    Node *dummy_head; // dummy head
    int count;
    void incrementCount() { count++; }
    void decrementCount() { count--; }
    int getCount() { return count; }

public:
    Linkedlist() : dummy_head(new Node(0)), count(0) {} // dummy head
    ~Linkedlist() {
        Node *current = dummy_head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        dummy_head = nullptr;
        count = 0;
    }
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    //void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
    void deleteNode(int index);
    //void deleteNode(int val);
    void reverse();
    void printLinkedlist();
    void swap();
    void removeNthFromEnd(int n);
    
};


#endif