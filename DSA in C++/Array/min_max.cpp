#include<iostream>
#include<climits>
using namespace std;

void min_max(int arr[] , int size){
     int min = INT_MAX;
     int max = INT_MIN;
     int min_index =0;

     for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i]>max){
            max = arr[i];
        }
     }
     cout<<"Minimum element is "<<min<<" at Index: "<<min_index<<endl;
     cout<<"Maximux element is "<<max<<endl;

}

int main(){
    int size;
    cout<<"Enter the size of arr: ";
    cin>>size;
    int arr[size];
    for (int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    min_max(arr, size);
    return 0;
}
