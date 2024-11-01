#include <iostream>
#include<unordered_map>
#include<sstream>
using namespace std;
int main(){
    // input
    string para = "my name is name and i dont know my name";
    // cin>>para;

    stringstream ss(para);
    string word;

    unordered_map<string, int> mpp;
    while(ss>>word){
        mpp[word]++;
    }

    // querry
    int querry_size;
    cin>>querry_size;
    while (querry_size--)
    {
        string querry_value;
        cin>>querry_value;

        cout<<"The frequecy of word '"<<querry_value<<"' is "<< mpp[querry_value]<<endl;
    }
    
    return 0;
}