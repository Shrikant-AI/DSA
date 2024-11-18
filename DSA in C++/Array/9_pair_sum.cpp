//* Given an array arr[] of n integers and a target value, return the pair of elements in the array whose sum is equal to target. This problem is a variation of 2Sum problem.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;

   for(int i=0;i<arr.size();i++){

      for(int j=i+1;j<arr.size();j++){

         if(arr[i]+arr[j] == s){

            vector<int>temp;
            temp.push_back(min(arr[i] , arr[j]));
            temp.push_back(max(arr[i] , arr[j]));
            ans.push_back(temp);
         }
         
      }
   }
   sort(ans.begin() , ans.end());
   return ans;
}

int main(){
    vector<int>arr = {1, 2, 3, 4, 5};
    int s = 7;
    vector<vector<int>>ans = pairSum(arr , s);
        for(const auto val: ans){
            for(const auto val2: val){
               cout<<val2;
            }
            cout<<endl;
    }
}