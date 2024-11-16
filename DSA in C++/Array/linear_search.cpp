#include<iostream>
using namespace std;

int  linear(int arr[],int n,int target){
    bool found = false;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"Element is present at index "<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"Element is not present in array"<<endl;
    }
    

}


int main(){
    int arr[]={4,8,1,6,1,7};
    int n = sizeof(arr)/sizeof(arr[1]);
    int target;
    cout<<"Enter the elem that you want to find: ";
    cin>>target;
    linear(arr,n,target);
    return 0;

}