#include <iostream>
using namespace std;

void countSort(int array[], int size){
    // Find the maximum element in the array
    int max=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    
    // Create a count array to store the count of each element
    int countArray[max+1]={0};
    for (int i = 0; i < size; i++)
    {
        int inputElement = array[i];
        countArray[inputElement]+=1;
    }
    
    // Modify the count array to store the actual position of each element in the sorted array
    for (int i = 1; i < max+1; i++)
    {
        countArray[i]=countArray[i-1]+countArray[i];
    }

    // Create an output array to store the sorted elements
    int output[size];
    for(int i = size-1; i>=0; i--){
        // Place each element in its correct position in the output array
        output[countArray[array[i]]-1] = array[i];
        countArray[array[i]]--;
    }
    
    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout<<output[i]<<" ";
    }
}

int main(){
    int array[] = {4,5,2,2,4,4,5,8,6,8,5};
    int size = sizeof(array)/sizeof(array[0]);
    countSort(array,size);
    return 0;
}
