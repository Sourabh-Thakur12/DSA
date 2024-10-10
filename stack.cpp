#include<iostream>
#include<string>
using namespace std;
class stack
{
private:
    int *a;
    int size,top;
public:
    stack(int s);
    ~stack();
    void push(int a);
    void pop();
    void peek();
    bool isfull();
    bool isempty();
    void display();
    void empty();
};

stack::stack(int s)
{
    size = s;
    a = new int[s];
    top = -1;
}

stack::~stack()
{
    delete []a;
}

void stack::push(int item){
    if(isfull()){
        cout<<"stack overflow";
    }
    else
    {
        a[++top]=item;
    }
    
}
bool stack::isfull(){
    if(top == size-1)
    return true;
    else
    return false;
}
void stack::display(){
    if (top==-1)
    {
        cout<<"stack is empty";
    }
    else
    {
        for (int i = top; i >=0; i--)
        {
            cout<<a[i]<<" ";
        }
        
    }
    
}

void stack::pop()
{
    int *p = &top;
    top--;
    delete p;
}
// void create_stack(){
     
// }
int main(){
    cout<<"sourabh"<<endl;
    char back;
    do
    {
        int choice;
    stack s1(4);
    s1.display();
    cout<<"\nThis is Stack method to store data."<<"\nSelect an appropriate options to Continue."<<"\n1. Create a new stack with size"<<"\n\tstack_name(size)"<<"\n2. Add an element to stack"<<"\n3. Delete the last added element"<<"\n4. Display your stack"<<"\n5. Check location of a element in stack"<<endl;

    // create_stack();
    // string s_name;int s_size;
    // cin>>s_name>>s_size;
    // stack s_name(s_size);

    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"underprogress";
        break;
    case 2:
    char repeat;
    do{
        int element;
        cout<<"Enter the element you want to add in stack: ";
        cin>>element;
        s1.push(element);
        cout<<"add another element y/n: ";
        cin>>repeat;
    } while (repeat == 'y');
        break;
    case 3:
        s1.pop();
        break;
    case 4:
        s1.display();
        break;
    case 5:
        cout<<"underprogress";
        break;
    
    default:
        cout<<"please select a valid option.";
        break;
    }
    cout<<"\npress b for back: ";
    cin>>back;
    } while (back =='b');
    return 0;
}