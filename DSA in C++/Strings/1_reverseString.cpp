//* WAC to reverse a string.

#include<iostream>
#include<cstring>
// #include<string>
#include<algorithm>
using namespace std;

// For char array -
void reverseChar(char arr[] , int sz){
    int start = 0 , end = sz-1;
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Char Array: "<<arr<<endl;
}

int main(){
    char arr[] = "Shrikant";
    int sz = strlen(arr);  
    string str = "Shinde";
    reverse(str.begin() , str.end());
    cout<<"Reversed String: "<<str<<endl;

    
    reverseChar(arr , sz);
    return 0;
}