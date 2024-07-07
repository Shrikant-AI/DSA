#include<iostream>
#include<string>
using namespace std;

int main (){
    int n = 3;
    for (int i =0;i<n;i++){
        for (int j =0 ; j<i+2;){
            cout<<"*";
        }

        for(int k = 0; k<i;k++){
            cout<<"  ";
        }
    }
    return 0;
}