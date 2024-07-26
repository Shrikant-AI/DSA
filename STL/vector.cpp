#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

    // * Vector = A vector is a dynamic array that can grow or shrink in size as elements are added or removed.

    // CODE = 

    // vector<int>v1({10,20,30,40,50});
    // cout<<"v1 = ";
    // for(vector<int>::iterator it1 = v1.begin();it1 != v1.end();it1++){
    //     cout<<*(it1)<<" ";
    // }
    // cout<<endl;
    // cout<<"v1 = ";
    // for (auto it2 = v1.begin() ; it2 !=v1.end(); it2++){
    //     cout<<*it2<<" ";
    // }
    // cout<<endl;
    // cout<<"This is not a iterator : ";
    // for(auto it3 : v1){
    //     cout<<it3<<" ";
    // }

    // * How to erase and insert elements in vectors =
    // - .erase(iterator or location of element)
    // vector<int>v2({1,2,3,4,5});
    // v2.erase(v2.begin()); // This will delete 1 op = 2,3,4,5
    // v2.erase(v2.begin()+2 , v2.begin()+4); // This will delete  4,5 from 2345 it like [start , end) start is deleted but not end
    // for (auto i2 : v2){
    //     cout<<i2<<" ";
    // }
    

    // * Insert = 
    // - .insert(location , value) ...for single value
    // - .insert(location , iterator , iterator) ...for range of values
    // - .insert(location , no of copies , value)

    vector <int>v3 ; 
    v3.insert(v3.begin() , 100);
    v3.insert(v3.begin()+1,2,200);

    // Copy one vector into another =
    vector<int>copy (2 , 300);
    v3.insert(v3.begin()+3 , copy.begin(), copy.end());
    for (auto i3 : v3){
        cout<<i3<<" ";
    }



}