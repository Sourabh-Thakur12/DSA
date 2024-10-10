#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data, node* n = 0){
        this->data = data;
        next = n;
    }};

    class sll{
        public:
        node* head;

        sll(){
            head = 0;
        }

    //  Functions 
    void addtohead(int userData);
    void deletefromhead();
    // bool isfull();
    // bool isempty();
    void display();
    void insert(int index, int userData);
    void Delete(int userData);
};

void sll::addtohead(int userData){
    node* temp = new node(userData);

    if(head == 0)
        head = temp;
    
    else{
        temp->next = head;
        head = temp;
    }
}

void sll::display(){
    if(head == 0){
        cout<<"\tList khali h bhadwe";
    }

    node* pointer = head;
    cout<<"Ye rahi teri list";
    while(pointer != 0){
        cout<<" --> "<<"|"<<pointer->data<<"|"<<pointer->next<<"|";
        pointer = pointer->next;

    }
}

void sll::deletefromhead(){
    if(head == 0){
        cout<<"\tkhali list se kya delete maaru gaandu";
    }
    node* temp = head;
    head = head->next;
    delete temp;
    cout<<"le kaat diya iska sar.\nmai innocent hu tere kahe pe kiya h\n";
}

void sll::insert(int index, int userData){
    if(index == 1)
        addtohead(userData);
    else{
        node* pointer = new node(userData);
        node* temp = head;
        int counter = 0;
        node* prev = 0;

        while(temp != 0 && counter != index){
            prev = temp;
            temp = temp->next;
            prev->next = pointer;
            pointer->next = temp;
            counter++;
        }

    }
}
int main(){
    sll l1;
    l1.addtohead(10);
    l1.addtohead(20);
    l1.addtohead(30);
    l1.addtohead(40);
    l1.insert(2,50);
    l1.deletefromhead();
    l1.display();
    return 0;
}