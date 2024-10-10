#include <iostream>
using namespace std;
class node{
    public:
    node* next;
    node* prev;
    int data;

    node(int data, node* prev = 0,  node* next = 0){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

class dll{
    public:
    node* head;
    node* tail;
    dll(){
        head = 0;
        tail = 0;
    }
    void Delete(int data);
    void addtohead(int data);
    void display();
};

void dll::Delete(int data){
    node* pointer = head;
    while(pointer != 0 && pointer->data != data){
        pointer = pointer->next;
     }
    pointer->prev->next = pointer->next;
    pointer->next->prev = pointer->prev;
    delete pointer;
}

void dll::addtohead(int data){
    node* pointer = new node(data);
    if(head == 0)
        head = tail = pointer;
    else{
    pointer->next = head;
    head->prev = pointer; 
    head = pointer;}
}

void dll::display(){
    if(head == 0){
        cout<<"Empty dll";
    }
    else{
        node* pointer = head;
        while(pointer != 0){
            cout<<pointer->data<<"-->";
            pointer = pointer->next;
        }
    }
}
int main(){
    dll d;
    d.addtohead(10);
    d.addtohead(20);
    d.addtohead(30);
    d.addtohead(40);
    d.Delete(30);
    d.display();
    return 0;
}