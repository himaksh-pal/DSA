using namespace std;
#include<bits/stdc++.h>
vector<int> rearrangeArrayMB(vector<int>& nums) {// brute MY
        int n = nums.size();
        vector<int> hsh1(n/2);
        vector<int> hsh2(n/2);
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                hsh1[a++]=nums[i];
            }
        }
        int b=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                hsh2[b++]=nums[i];
            }
        }

        
    
        
        
        int idx1=0;
        int idx2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=hsh1[idx1++];
            }
            else if(i%2!=0){
                nums[i]=hsh2[idx2++];
            }
        }
        return nums;
    }

 vector<int> rearrangeArrayO(vector<int>& nums) { //optimal
        int n = nums.size();
        vector<int> ans(n,0);
        int pos = 0 , neg = 1;
        for(int i=0; i < n ; i++ ){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
            else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        
        return ans;
    }
int main(){
    vector<int> nums(6);
    nums={3,1,-2,-5,2,-4};
    rearrangeArrayO(nums);
    for(auto val : nums){
        cout<<val<<" ";
    }

    return 0;
}