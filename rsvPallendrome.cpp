#include <iostream>
using namespace std;
bool isPallandrome(string s, int l, int h){
    if(l>=h) return true;
    else if(s[l] != s[h]) return false;
    else return isPallandrome(s, l+1, h-1);
}
int main(){
    string s = "pokjkop";
    int l=0;
    int h=s.length()-1;
    cout<<isPallandrome(s,l,h);
    return 0;
}