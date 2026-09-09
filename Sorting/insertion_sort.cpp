#include<vector>
#include <iostream>
using namespace std;
vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
    return nums;
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
        vector<int>  result = insertionSort(nums);
        for (int val : result) {
        cout << val << " ";}
    return 0;
}