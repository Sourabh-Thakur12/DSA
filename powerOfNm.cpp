#include <iostream>
using namespace std;
int expo(int base, int power){
    if(power==0)
    return 1;
    else
    return base*expo(base,power-1);
}
int main(){
    cout<<expo(2,2);
    return 0;
}