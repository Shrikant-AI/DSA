//* WAC to swap min max elems of an array.

#include<iostream>
#include<climits>
using namespace std;

void minmax(int arr[] , int n){
    int min = INT_MAX;
    int max = INT_MIN;
    int min_index=0;
    int max_index=0;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_index=i;
        }
        if(arr[i]>max){
            max = arr[i];
            max_index=i;
        }
    }
    swap(arr[min_index] , arr[max_index]);
}

int main(){
    int arr[] = {15,10,2,5,7,90,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before swapping: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    minmax(arr, n);

    cout<<"\nAfter swapping: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}