#include <iostream>
using namespace std;

/**
 * @brief Sorts an array of integers using the insertion sort algorithm
 * @param array The array to be sorted
 * @param size The size of the array
 */
void InsertionSort(int a[], int size){
    int temp,j;
    for(int i = 1; i<size; i++)
    {
        temp = a[i];
    
        // Compare the current element with the elements before it and shift them to the right if necessary.
        for ( j = i-1; j >= 0; j--)
        {
            if (a[j]>temp)
            {
                a[j+1] = a[j];
            }
            else
                break;
        }
        
        // Place the current element in its correct position.
        a[j+1]=temp;
    }
}
int main() {
    int array[] = {12, 34, 53, 23, 22};
    int size = sizeof(array) / sizeof(array[0]);

    // Sort the array using insertion sort
    InsertionSort(array, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
