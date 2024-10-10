#include <iostream>
using namespace std;
int fibSeries(int n){
    if(n==0 || n==1)
    return 1;
    else
    return fibSeries(n-2)+fibSeries(n-1);
}
int main(){
    cout<<fibSeries(10);
    return 0;
}