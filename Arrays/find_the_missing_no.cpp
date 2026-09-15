#include<bits/stdc++.h>
using namespace std;

int missingNumberM(vector<int>& nums) { // my approach
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
    int result = missingNumberM(nums);
    cout<<" RESULT : "<<result;
    return 0;
}