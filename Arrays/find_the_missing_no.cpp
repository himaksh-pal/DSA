#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j]==i){
                i++;
                j=0;
            }
            else{
                j++;
            }
        }
        return i;

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
    int result = missingNumber(nums);
    cout<<" RESULT : "<<result;
    return 0;
}