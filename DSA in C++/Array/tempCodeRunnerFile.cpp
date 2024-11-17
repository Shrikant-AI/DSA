#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans = 0;
    for (int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
return ans;
}
int main(){
    int n = 5;
    int arr[n] = {1, 1,2,2,4};
    
    cout<<"unique elem is: "<<unique(arr , n);
    return 0;
}