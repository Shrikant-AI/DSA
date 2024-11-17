//* WAC to swap the alternate elements of an array.
#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
     int odd[5]={1,2,10,20,3};
     int even[6]={7,8,40,50,6,2};

     swapAlternate(odd, 5);
     printArray(odd , 5);
     cout<<"\n";
     swapAlternate(even, 6);
     printArray(even , 6);

}