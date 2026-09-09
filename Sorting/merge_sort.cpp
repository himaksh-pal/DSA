#include<vector>
#include <iostream>
using namespace std;
vector<int> mergeSort(vector<int>& nums) {
    int n = nums.size();
    
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
        vector<int>  result = mergeSort(nums);
        for (int val : result) {
        cout << val << " ";}
    return 0;
}