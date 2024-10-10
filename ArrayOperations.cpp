#include <iostream>
using namespace std;
int sum(int array[], int size)
{
    
        int Sum = 0;
        for (int i = 0; i < size; i++)
        {
            Sum += array[i];
        }
        return Sum;
    
}
int Rsum(int array[],int size){ 
    if(size == 0)
        {
            cout << "The Sum is: " << array[0];
            return 0;
        }
        return array[0] + Rsum(array + 1, size--);}

int max(int array[], int size)
{

    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int min(int array[], int size)
{

    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int linearSearch(int array[], int size, int key)
{
    string choice;
    cin >> choice;
    // if (choice == "recurssive")
    // {
    //      if (array[i]==key)
    //      {
    //         return key;
    //      } return -1;

    // }
    // else
    // {
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        key = array[0];
        if (array[i] == key)
        {
            count++;
            cout << "key is found on the position " << count<<endl;
            return 0;
        }
    }
}
// }
int RbinarySearch(int array[], int size, int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (low <= high)
    {
        if (key == array[mid])
            return mid;
        else if (key < array[mid])
            return RbinarySearch(array, size, key, low, mid--);
        else
            return RbinarySearch(array, size, key, mid++, high);
    }
    return -1;
}

int binarySearch(int array[], int size, int key, int low, int high)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        key = array[0];
        if (array[i] = key)
        {
            count++;
            cout << "key is found on the position " << count;
            return 0;
        }
    }
}

void InsertionSort(int a[], int size)
{
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = a[i];

        // Compare the current element with the elements before it and shift them to the right if necessary.
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
            }
            else
                break;
        }

        // Place the current element in its correct position.
        a[j + 1] = temp;
    }
}
int main()
{
    int array[5] = {5, 4, 2, 3, 1};
    cout << "\nThe sum is:" << sum(array, 5);
    cout << "\nThe max of array is:" << max(array, 5) << endl;
    cout << "\nThe min of array is:" << min(array, 5) << endl;
    InsertionSort(array, 5);
    cout << "The sorted array is: ";
    for (int i = 0; i < 5; i++)
        cout << array[i] << " ";
    linearSearch(array, 5, 5);
    cout << "element found at pos" << RbinarySearch(array, 5, 5, 0, 5);
    return 0;
}