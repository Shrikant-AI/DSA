//* WAC to calculate sum and product of all numbers in array.

#include<iostream>
using namespace std;

int sumOfArray(int arr[] , int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int productOfArray(int arr[] , int n){
    int product = 1;
    for(int i=0 ; i<n ; i++){
        product = product * arr[i];
    }
     return product;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of array is "<<sumOfArray(arr,n)<<endl;
    cout<<"Product of all elms of array is "<<productOfArray(arr,n)<<endl;
}