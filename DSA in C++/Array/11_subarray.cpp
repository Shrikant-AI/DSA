#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

// Finding all the subarray : 
void subarray(int arr[],int n){
     for (int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

// Calculating maximum subarray sum :
void max_sum(int arr[] , int n){
    int maxsum = INT_MIN;
    for(int st=0; st<n; st++){
        int current_sum = 0;
        for(int end=st; end<n; end++){
            current_sum+=arr[end];
            maxsum = max(current_sum , maxsum);
        }
    }
    cout<<"Maximum subarray sum: "<<maxsum;
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    // subarray(arr , n);
    max_sum(arr , n);
    return 0;
}



