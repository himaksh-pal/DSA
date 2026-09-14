#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
int main(){
    cout<<"enter size of the vector :";
    int n ;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the Target :";
    cin>>target;
    int result = linearSearch(nums,target);
    cout<<"The index at which the Target is "<<result;
    
}