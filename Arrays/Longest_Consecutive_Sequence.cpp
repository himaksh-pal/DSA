#include<bits/stdc++.h>
using namespace std;
int longestConsecutiveM(vector<int>& nums) { // better MY 
         int n = nums.size();
        if ( n==0){
            return 0;
        }
        int cnt = 1;
        int maxlen=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1]){
                cnt++;
                maxlen=max(maxlen,cnt);
            }
            else if (nums[i]==nums[i+1]){
                continue;
            }
            else{
                cnt=1;
            }
        }
        return maxlen;
    }
int main(){
    vector<int> nums;
    nums={0,0,1,-1};
    int result = longestConsecutiveM(nums);
    cout<<result;

    return 0;

}