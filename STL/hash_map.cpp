//** Hashing using Map 

#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

int main() 
{
    int n ;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    int q;
    cout<<"Enter no of queries: ";
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<number<<" occurs "<<m[number]<<" times."<<endl;
    }
}