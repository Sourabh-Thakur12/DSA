#include <iostream>
using namespace std;

class node{
    public:
    node* next;
    int data;

    node(int data, node* next = 0){
        this->data = data;
        this->next = next;
    }
};

class ll{
    public:
    node* head;
    ll(){
     head = 0;}
    
    void insert(int data,int index);
    void addtohead(int data);
    int display();
};

void ll::insert(int data, int index){
    if(index == 1){
        addtohead(data);}
    
    else{
    node* pointer = new node(data);
    node* prev_node = 0;
    node* next_node = head;
    int counter = 1;
    while(counter != index && next_node !=0 ){
        prev_node = next_node;
        next_node = next_node->next;
        counter+=1;
    }
        prev_node->next = pointer;
        pointer->next = next_node;
    }

}

void ll::addtohead(int data){
    node* pointer = new node(data);
    if(head == 0){
        head = pointer;}
    else{
    pointer->next = head;
    head = pointer;}
}

int ll::display(){
    if(head == 0)
        cout<<"Empty";
    
    node* pointer = head;
    while(pointer != 0){
        cout<<" -->"<<pointer->data;
        pointer = pointer->next;
    }
}
int main(){
    ll l;
    l.addtohead(10);
    l.insert(20,2);
    l.insert(30,3);
    l.insert(40,4);
    l.insert(50,5);
    l.display();
    return 0;
}