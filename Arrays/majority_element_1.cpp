#include<bits/stdc++.h>
using  namespace std;
int majorityElement(vector<int>& nums) { // better
        int n = nums.size();
        int times = n/2;
        map<int,int>mpp;
        for(int i=0;i<n;i++ ){
            mpp[nums[i]]++;
        }  
        for(auto it : mpp){
            if(it.second>times){
                return it.first;
            }
        }
        return -1;
        
    }
int majorityElementO(vector<int>& nums) { //optimal
        int n = nums.size();
        int times = n/2;
        int cnt = 0;
        int el=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt =1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else cnt--;
        }
        int cnt1 =0;
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1>times){
            return el;
        }
        return -1;
        
    }
int main(){
    int n=6;
    vector<int> nums={-1,1,1,1,2,1};
    int result = majorityElementO(nums);
    cout<<result;
    
    return 0;
}