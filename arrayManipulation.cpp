#include <iostream>
#include <vector>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> arr(n,0);
    int size = queries.size();
    for(int i = 0; i<size; i++){
        for(int j=0; j<queries[i].size(); j++){
            int a = queries[i][0], b= queries[i][1], c= queries[i][2];
            // cout<<a<<" "<<b<<" "<<c<<endl;
            for(int k = a-1; k<b; k++){
               arr[k] = arr[k] + c;
            }
        }
    }
    int i = 0;
    for(auto itr: arr){
        arr[i] = arr[i]/3;
        i++;
    }
    //max
    int max = arr[0];
    for(int i =0; i<arr.size(); i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

int main(){
   int n = 10;
   vector<vector<int>> vv;
   vv = {{1,5,3},{4,8,7},{6,9,1}};
   cout<<arrayManipulation(n, vv); 
    return 0;
}