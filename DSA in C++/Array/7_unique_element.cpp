#include<iostream>
using namespace std;

int singleUnique(int arr[],int n){
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
return ans;
}

void unique(int arr[],int n){
    for(int i=0;i<n;i++){
        bool unique = true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                unique = false;
                break;
            }
        }

        if(unique){
            cout<<arr[i]<<" ";
        }
    }
}

void uniqueUsingForLoop(int arr[],int n){
    for(int i=0;i<n;i++){
        if((i==0 || arr[i] !=arr[i-1] ) && (i==n-1 || arr[i]!=arr[i+1]))
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=6;
    int arr[6] = {1, 1, 5 , 2, 2, 4};
    
    // cout<<"unique elem is: "<<singleUnique(arr , n);
    uniqueUsingForLoop(arr,n);
    return 0;
}