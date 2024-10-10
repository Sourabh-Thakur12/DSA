#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size){
    for (int i = 1; i < size; i++)
    { int j;
        int temp = arr[i];
        for(j = i-1; j>=0; j--){
            if(arr[j]>temp)
                arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = temp;
    }
    
}
int main(){
    int arr[5] = {8,2,1,9,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, size);

    for(int i = 0; i < 5; i++)
        cout<<" "<<arr[i];
    return 0;
}