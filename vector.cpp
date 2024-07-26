#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int>v1({10,20,30,40,50});
    cout<<"v1 = ";
    for(vector<int>::iterator it1 = v1.begin();it1 != v1.end();it1++){
        cout<<*(it1)<<" ";
    }
    cout<<endl;
    cout<<"v1 = ";
    for (auto it2 = v1.begin() ; it2 !=v1.end(); it2++){
        cout<<*it2<<" ";
    }

    
}