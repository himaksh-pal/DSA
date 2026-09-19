#include<bits/stdc++.h>
using namespace std;
int longestSubarrayB(vector<int>& nums,long long k){ // brute
    int n=nums.size();
    int len =0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
                len=max(len,j-i+1);

            }

        }
    }
    return len;
}
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
    int n =10;
    vector<int> nums(n);
    nums = {1,2,3,1,1,1,1,4,2,3};
    long long k=3;
    int result = longestSubarray(nums,k);
    cout<<" RESULT : "<<result;
    return 0;
}
