
#include<bits/stdc++.h>
using namespace std;


void sortColorsM(vector<int>& nums) { //Better MY
          int n = nums.size();
int count0 = 0, count1 = 0, count2 = 0;

for (int i = 0; i < n; i++) {
    if (nums[i] == 0) count0++;
    else if (nums[i] == 1) count1++;
    else count2++;
}

int idx = 0;
for (int i = 0; i < count0; i++) nums[idx++] = 0;
for (int i = 0; i < count1; i++) nums[idx++] = 1;
for (int i = 0; i < count2; i++) nums[idx++] = 2;

    }

void sortColorsO(vector<int>& nums) { //optimal
        int n = nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
int main(){
    int n=5;
    vector<int> nums={1,0,2,1,0};
    sortColorsO(nums);
    for(auto val : nums){
        cout<<val<<" ";
    }
}