#include<iostream>
#include<vector>
using namespace std;
void rotateArrayByOne(vector<int>& nums) {
    int temp=nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1]=nums[i];
    }
    nums[nums.size()-1]=temp;
    for(int val : nums){
        cout<<val<<" ";
    }
    }
int main(){
    cout << "Enter the size of the array : ";
        int n;
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of vector : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        rotateArrayByOne(nums);
}