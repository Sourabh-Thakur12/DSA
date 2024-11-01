#include <iostream>
using namespace std;

int* Hash_implimentation(int array[], int size){
    int hash[13] = {0};
    int *p = new int[13];
    for(int i = 0; i<size; i++){
        hash[array[i]]++;
    }
    return p;
}
int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i = 0; i<size; i++){
       cin>>array[i]; 
    }

    // precompute hash array
    // int *pointer;
    // pointer = Hash_implimentation(array, size);
    int hash[13] = {0};
    for(int i = 0; i<size; i++){
        hash[array[i]]++;
    }

    int querry;
    cin>>querry;
    while(querry--){
        int querry_val;
        cin>>querry_val;

        //fetch
        // cout<<"The frequency of "<<querry_val<<" is: "<<pointer+querry_val<<endl;
        cout<<"The frequency of "<<querry_val<<" is: "<<hash[querry_val]<<endl;
 
    }
    return 0;
}