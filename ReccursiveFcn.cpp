#include <iostream>
using namespace std;
int func(int data){
    if (data>=1)
    {
     if(data%2==0)
    {
        int cube=data*data*data;
        cout<<"\n"<<cube;
    }func(data-1);
    
}}
int main(){
    func(10);
    return 0;
}