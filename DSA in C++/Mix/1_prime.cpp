#include<iostream>
#include<cmath>
using namespace std;

bool isprime1(int n){
    int count = 0;
    if(n<=1) return false;
    else{
            for(int i=1;i<=n;i++){
                if(n%i==0){
                    count++;
                }
            }

        if(count==2)return true;
        else return false;
        
    }
}
bool isprime2(int n){
    if(n<=1)return false;
    for(int i=2 ; i<n ; i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isprime3(int n){
    if(n<=1)return false;
    for(int i=2 ; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}
bool isprime4(int n){
    if(n<=1)return false;
    else if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5 ; i*i<=n ;i+=6){
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}




int main(){
    int n=7;
    if(isprime4(n)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}