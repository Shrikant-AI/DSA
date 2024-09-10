#include<iostream>
#include<vector>
using namespace std;
using std::cin;

int main(){
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    vector<int> arr (n);
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cout<<"Enter the no of queries: "<<endl;
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<number<<" occurs "<<hash[number]<<" times."<<endl;

    }
}

