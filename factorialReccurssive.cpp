#include <iostream>
using namespace std;
int fact(int a){
    if(a==0)
    return 1;
    else
    return a*fact(a-1);
}
int main(){
    cout<<fact(5);
    return 0;
}