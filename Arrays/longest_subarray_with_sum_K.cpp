#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &nums, long long k){ // better
    map<long long,int>preSumMap;
    long long sum=0;
    int maxLen = 0;
    for(int i = 0 ; i < nums.size() ; i ++){
        sum+=nums[i];
        if(sum ==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem = sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxLen;
        
    }

int longestSubarrayO(vector<int>& nums,long long k){ // optimal
    int n = nums.size();
    int right=0,left=0;
    int maxLen=0;
    long long sum = nums[0];
    while(right<n){
        while(left<=right && sum > k){
            sum-=nums[left];
            left++;
        }
        if(sum == k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=nums[right];
        }
        
    }
    return maxLen;
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
    long long k;
    cout<<"enter the value of k :";
    cin>>k;
    int result = longestSubarrayO(nums,k);
    cout<<" RESULT : "<<result;
    return 0;
}
