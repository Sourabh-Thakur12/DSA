#include <iostream>
using namespace std;
int hcf(int a, int b){
    if(a==b) return a;
    else if(a>b) return hcf(a-b,b);
    else return hcf(a,b-a);
}
int main(){
    cout<<hcf(4,6);
    return 0;
}