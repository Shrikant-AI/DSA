#include<iostream>
using namespace std ; 

int main (){
    
    int arr[] = {1,2,3,2,1,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    

    

    int q ; 
    cout<<"Enter no of queries: "<<endl;
    cin>>q;
    while (q--)
    {
        int number ; 
        // cout<<"Enter number to search: "<<endl;
        cin>>number;
        int cnt = 0;
        

        for (int i=0;i<size;i++){
            if (arr[i]==number )
                    cnt++;
        }

        cout<<number<<" occurs "<<cnt<<" time"<<endl;
        
    }
    
}