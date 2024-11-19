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
void maxsum(int arr[] , int n){
    int max_sum = INT_MIN;
    for(int st=0; st<n; st++){
        int current_sum = 0;
        for(int end=st; end<n; end++){
            current_sum+=arr[end];
            max_sum = max(current_sum , max_sum);
        }
    }
    cout<<"Maximum subarray sum: "<<maxsum;
}

// kadanes Algorithm to calculate maximum subarray sum:
void kaddanesalgo(int arr[] , int n){
    int curr_sum=0 , max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        max_sum = max(curr_sum , max_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    cout<<"Maximum subarray sum using kadanes algo : "<<max_sum;
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    // subarray(arr , n);
    // maxsum(arr , n);
    kaddanesalgo(arr , n);
    return 0;
}



