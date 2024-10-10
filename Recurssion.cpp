#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}

int fibonacci(int num){
    if (num == 0 || num == 1)
        return 1;
    return fibonacci(num - 2) + fibonacci(num - 1);
}

int gcd(int num1, int num2){
    if(num1 ==  num2)
        return num1;
    else if(num1>num2)
        return gcd(num1-num2,num2);
    return gcd(num1, num2-num1);
}

int power(int num, int exp){
    if(exp == 0)
        return 1;
    return num * power(num,exp-1);
}

void swap(int &num1,int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int reverse(int array[], int low, int size){
    int i = low; int j = size - 1;
    if(i<j){
        // array[i]=array[i]+array[j];
        // array[j]=array[i]-array[j];
        // array[i]=array[i]-array[j];
        // cout<<"before swap"<<array[i]<<" "<<array[j]<<endl;
        // int temp;
        // temp=array[i];
        // array[i]=array[j];
        // array[j]=temp;
        swap(array[i],array[j]);
        reverse(array,i+1,j-1);
        // cout<<"after swap"<<array[i]<<" "<<array[j]<<endl;
    }    
}

int main(){
    cout<<"Sourabh";
    char back;
    do
    {
    cout<<"\nSelect The Operation";
    cout<< "\n1. Factorial of a number." << "\n2. Nth fibonacci number"
    << "\n3. GCD of a number" << "\n4. Power of a number" << "\n5. Reverse of array" <<endl;
    int choice; 
    cin>>choice;
    switch (choice)
    {
    case 1:
        int num;
        cout<<"Enter the number: ";
        cin>>num;
        cout<<"The factorial of "<<num<<" is: "<<
        factorial(num);
        break;
    
    case 2:
        // int num;
        cout<<"Enter the number: ";
        cin>>num;
        cout<<"The fabonacci series at position "<<num<<" is: "<<fibonacci(num);
        break;

    case 3:
        int num1,num2;
        cout<<"Enter the number1: ";
        cin>>num1;
        cout<<"\nEnter the number2: ";
        cin>>num2;
        cout<<"The gcd of  "<<num1<<" and "<<num2<<" is: "<<gcd(num1,num2);
        break;

    case 4:
        int num3,num4;
        cout<<"Enter the number1: ";
        cin>>num3;
        cout<<"\nEnter the number2: ";
        cin>>num4;
        cout<<"The power of  "<<num3<<" and "<<num4<<" is: "<<power(num3,num4);
        break;

    case 5:
        int array[6] = {1,2,3,4,5,6};
        cout<<"riverse of array is: ";
        reverse(array,0,6);
        for (int i = 0; i < 6; i++)
            cout<<array[i]<<" ";
        
        break;

    // default:
    // cout<<"please enter a valid option";
    //     break;

    }      
    cout<<"\n press b for back: ";
    cin>>back;
    } while (back == 'b');

    return 0;
}