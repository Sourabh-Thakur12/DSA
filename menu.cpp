#include <iostream>
using namespace std;

class menu
{
private:
public:
    string program;
    int count = 0;
    menu(string program_Name)
    {
       program = program_Name;
       cout<<"\nThis is "<< program << " method to store data."<<"\nSelect an appropriate options to Continue.";
    }
    ~menu();
    void addOption(string);
    void removeOption();
    
};
menu::~menu()
{
}
void menu::addOption(string option){
    count++;
    if (option == "insertion")
    {
        cout<<"\n"<<count<<". Add an element to "<< program;
    }
    else if (option == "deletion")
    {
        cout<<"\n"<<count<<". perform Deletion in "<<program;
    }
    else{
        cout<<"\n"<<count<<". display "<<program;
    }
    
}