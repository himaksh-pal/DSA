#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums){
    int n= nums.size();
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int findMaxConsecutiveOnesM(vector<int>& nums) {
        int n = nums.size();
        int max=0;
        int lar =0;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                max++;
            }
            else{
                temp.push_back(max);
                max=0;
            }
        }
        temp.push_back(max);
        for(int i=0;i<temp.size();i++){
            if(temp[i]>lar){
                lar=temp[i];
            }
        }
        return lar;


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
    int result = findMaxConsecutiveOnes(nums);
    cout<<" RESULT : "<<result;
    return 0;
}