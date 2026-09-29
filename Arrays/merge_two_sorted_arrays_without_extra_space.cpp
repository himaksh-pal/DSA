#include<bits/stdc++.h>
using namespace std;
void mergeMO(vector<int>& nums1, int m, vector<int>& nums2, int n) { // optimal MY
        
        for(int i = 0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    
    }
int main(){
    int n = 3;
    int m = 3;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    mergeMO(nums1,m,nums2,n);
    for(auto it : nums1){
        cout<<it<<" ";
    }
    return 0;
}