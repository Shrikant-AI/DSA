//* WAC to return intersection of two arrays

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Simple but TLE and will repeat the elements in intersection
// vector<int> intersection(vector<int>arr1 , vector<int>arr2 ){
//     vector<int> result;
//     for(int i=0;i<arr1.size();i++){
//         for(int j=0;j<arr2.size();j++){
//             if(arr1[i]==arr2[j]){
//                result.push_back(arr1[i]) ;
//                arr2[j] = -1;
//             }
//         }
//     }
//     return result;
// }+

//* Elements will be repeated in intersection :
vector<int> intersection(vector<int>&arr1 , vector<int>&arr2){
    vector<int> result;
    int i=0 , j=0;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]==arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;

}

//* Elements will not be repeated in intersection :
//  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         int i=0,j=0;
//         sort(nums1.begin() , nums1.end());
//         sort(nums2.begin() , nums2.end());

//         while(i<nums1.size() && j<nums2.size()){
//             if(nums1[i]==nums2[j]){
//                 if(ans.empty() || ans.back()!=nums1[i]){
//                         ans.push_back(nums1[i]);
//                 }
//                 int current = nums1[i];
//                 while(i<nums1.size() && nums1[i]==current)i++;
//                 while(j<nums2.size() && nums2[j]==current)j++;
//             }
//             else if(nums1[i]<nums2[j]){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return ans;
        
//     }


int main(){
    vector<int> arr1= {1,2,3,2,2,4};
    vector<int> arr2= {7,8,4,2,2};
    vector<int> result = intersection(arr1,arr2);
    for(int val:result){
        cout<<val<<" ";
    }
}