#include <iostream>
using namespace std;
/**
     @brief Node class constructor.
    
     @param d The data value to be stored in the node.
     @param n Pointer to the next node in the linked list. Defaults to nullptr.
 */

class Node
{
public:
    int data; Node *next;
    Node(int d, Node *n = 0)
{
    data = d;
    next = n;
}

};
class SingilyLinkedList{
public:
    Node *head;
    SingilyLinkedList();
    ~SingilyLinkedList();
    void addtohead(int userData);
    void deletefromhead();
    void insert(int index, int userData);
    void Delete(int userData);
    void display();
    int count();
    void reverse();
};

SingilyLinkedList::SingilyLinkedList()
{
    head = 0;
}

SingilyLinkedList::~SingilyLinkedList()
{
    Node *temp = head;
    while (head!=0)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
    
}

int SingilyLinkedList::count()
{
    int counter = 0;
    Node * pointer = head;
    while(pointer != 0){
        pointer = pointer->next;
        counter++;
    }
    return counter;
}
void SingilyLinkedList::display()
{
    Node * pointer = head;
    while(pointer != 0){
        cout<<pointer->data<<" ";
        pointer = pointer->next;
    }
}
void SingilyLinkedList::addtohead(int userData)
{
    Node * pointer = new Node(userData);
    if (head==0)
    {
        head = pointer;
    }
    else
    {
        pointer->next = head;
        head = pointer;
    }
    
}
void SingilyLinkedList::insert(int index,int userData)
{
    
    if (index==1)
    {
        addtohead(userData);
    }
    else
    {
        Node * pointer = new Node(userData);
        int counter = 2;
        Node * pointer1 = head;
        Node *prev= 0;
        while (pointer1 !=0 && counter != index )
        {
            prev = pointer1;
            pointer1 = pointer1->next;
            counter++;
            prev->next = pointer1;
            pointer->next = pointer1;
        }
        
    }  
}
void SingilyLinkedList::deletefromhead()
{
    if (head==0)
    {
        cout<<"Empty";
    }
    else
    {
        Node *pointer = head;
        head = head->next;
        delete pointer;
    }
    
    
}
    void SingilyLinkedList::Delete(int userData)
    {
        Node *  pointer = head;
        Node * prev = 0;
        while (pointer != 0 && pointer->data != userData)
        {
            prev = pointer;
            pointer = pointer->next;
        }
        
        if (pointer == 0)
        {
            cout<<"Element not found";
        }
        else if (pointer==head)
        {
            addtohead(userData);
        }
        else
        {
            prev->next=pointer->next;
            delete pointer;
        } 
    }
    void SingilyLinkedList::reverse()
    {
        Node * pointer = head->next;
        head->next=0;
        while (pointer!=0)
        {
            addtohead(pointer->data);
            Node *temp = pointer;
            pointer = pointer->next;
            delete temp;
        }
        
    }
int main(){
    cout<<"Sourabh";
    SingilyLinkedList List_1;
    List_1.addtohead(10);
    List_1.addtohead(20);
    List_1.addtohead(30);
    List_1.addtohead(40);
    List_1.insert(5,200);
    List_1.insert(6,500);
    List_1.insert(7,40);
    List_1.Delete(30);
    List_1.display();cout<<"\n";
    List_1.reverse();
    List_1.display();
    return 0;
}