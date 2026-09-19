#include<bits/stdc++.h>
using namespace std;
vector<int> twoSumBM(vector<int>& nums, int target) { // brute My
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
            
        }
        return {-1,-1};
        
    }

vector<int> twoSumO(vector<int>& nums,int target){ //optimal
    map<int,int>mpp;
    int n =nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num]=i;
    }
    return {-1,-1};
}
int main(){
    int n=5;
    vector<int> nums={2,6,5,8,11};
    int target=14;
    vector<int> result = twoSumO(nums,target);
    for(auto val : result){
        cout<<val<<" ";
    }
}    