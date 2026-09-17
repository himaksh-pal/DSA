#include<bits/stdc++.h>
using namespace std;
int singleNumberMB(vector<int>& nums){  // brute , MY
        int n = nums.size();
        int target;
        for(int i=0;i<n;i++){
            int cnt =0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
                if(cnt==2){
                    break;
                }
            }
            if(cnt==1){
                target =nums[i];
                break;
            }
        }
        return target;
}
int singleNumber(vector<int>& nums){ // optimal
    int XOR=0;
    for(int i=0;i<nums.size();i++){
        XOR^=nums[i];
    }
    return XOR;

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
    int result = singleNumber(nums);
    cout<<" RESULT : "<<result;
    return 0;
}