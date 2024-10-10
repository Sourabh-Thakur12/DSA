#include <iostream>
using namespace std;
class Node
{
public:
    int data; Node *next; Node *prev;
    Node(int d, Node *n = 0, Node *p = 0)
{
    prev = p;
    data = d;
    next = n;
}

};

class DoublyLinkedList
{
public:
    Node *head; Node *tail;
    DoublyLinkedList(){
        head = 0;
        tail = 0;
    };
    ~DoublyLinkedList();
    void addtohead(int userData);
    void addtotail(int userData);
    void insert(int index, int userData);
    void deletefromhead();
    void deletefromtail();
    void Delete(int userData);
    void display();
    void reverse();
};
DoublyLinkedList::~DoublyLinkedList(){
    Node *pointer = head;
    while (head != 0)
    {
        head = head->next;
        delete pointer;
        pointer = head;
        tail = 0;
    }
    
}
void DoublyLinkedList::addtohead(int userData)
{
    Node *pointer = new Node(userData);
    if (head==0)
    {
        tail = head = pointer;
    }
    else
    {
        pointer->next = head;
        head->prev = pointer;
        head = pointer;
    }
}

void DoublyLinkedList::addtotail(int userData)
{
    Node *pointer = new Node(userData);
    if (head==0)
    {
        tail = head = pointer;
    }
    else
    {
        pointer->prev = tail;
        tail->next = pointer;
        tail = pointer;
    }
}
void DoublyLinkedList::display()
{
    Node * pointer = head;
    while(pointer != 0){
        cout<<pointer->data<<" ";
        pointer = pointer->next;
    }
}
int main(){
    DoublyLinkedList List_1;
    List_1.addtohead(10);
    List_1.addtohead(20);
    List_1.addtotail(50);
    List_1.addtotail(40);
    List_1.addtotail(30);
    List_1.display();
    return 0;
}