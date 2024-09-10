//**  Character Hashing

#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;


    int hash[26]={0};

    for (int i=0;i<s.size();i++){
        hash[s[i]-'a']++;

    }
    
    int q;
    cout<<"Enter no of queries: ";
    cin>>q;

    while (q--)
    {
        char ch;
        cin>>ch;
        cout<<ch<<" occurs "<<hash[ch-'a']<<" time."<<endl;
    }
    
}