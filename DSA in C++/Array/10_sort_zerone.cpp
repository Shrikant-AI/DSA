#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sort01(int arr[], int n)
{
   int right = n-1;
   int left = 0;

   while(left <  right){
      while(arr[left]==0 && left<right){
         left++;
      }
      while(arr[right]==1 && left<right){
         right --;
      }

      if(left<right){
         swap(arr[left] , arr[right]);
         left++;
         right--;
      }
   }
}

int main(){
    int arr[8]={1,0,0,1,1,0,0,1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size: "<<n<<endl;
    cout<<"Before Fun call: ";
    printArray(arr, n);
    sort01(arr, n);
    cout<<"\nAfter Fun call: ";
    printArray(arr, n);
    
    return 0;

}