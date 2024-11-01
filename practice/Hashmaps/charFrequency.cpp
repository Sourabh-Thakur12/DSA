#include <iostream>
using namespace std;
int main(){
    // input
    string s;
    cin>>s;
    // cout<<s.length();
    // pre-compute
    int hash[26] = {0};
    for(int i = 0; i<s.length(); i++){
    hash[s[i] - 'a']++;
    // cout<<"s[i]- a "<<hash[s[i]-'a']<<" ";
    }
    //querry 
    int querry_size;
    cin>>querry_size;

    while(querry_size--){
        char querry_val;
        cin>> querry_val;

        //fetch
        cout<<"The frequency of char "<<querry_val<<" is "<<hash[int(querry_val-'a')]<<endl;
    }
    return 0;
}