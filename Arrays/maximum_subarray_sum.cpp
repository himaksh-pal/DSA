#include<bits/stdc++.h>
using namespace std;

int maxSubArrayO(vector<int>& nums) { // optimal
    int n = nums.size();
    int sum =0;
    int maxi=INT_MIN;
    // int start=0;
    // int ansStart = -1, ansEnd = -1;
    for(int i=0;i<n;i++){
        // if(sum==0)
        // {start=i;}
        sum+=nums[i];
        if(sum>maxi){
            maxi=sum;
            // ansStart=start;
            // ansEnd=i;

        }
        if(sum<0){
            sum=0;
        }
    }
    
    return maxi;

    }
int main(){
    vector<int> nums(7);
    nums={-2,-3,4,-1,-2,5,-3};
    int result = maxSubArrayO(nums);
    cout<<"RESULT :"<<result;


}