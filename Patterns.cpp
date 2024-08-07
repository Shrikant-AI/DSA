#include<iostream>
#include<string>
using namespace std;

/* Pattern 1 :
For n = 2 the pattern will be 
2 2 1 1
2 1

For n = 3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1
*/

void pattern1(int n) {
    for (int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            for(int k=0;k<i;k++)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
