#include<iostream>
#include<vector>
using namespace std;
    int f(vector<int>& nums, int low , int high){
            int pivot=nums[low];
            int i=low;
            int j=high;
            while(nums[i]<=pivot && i<=high){
                i++;
                while(nums[j]>pivot && j>=low){
                    j--;
                }
                if(i<j){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
            int temp = nums[low];
            nums[low]=nums[j];
            nums[j]=temp;

            return j;
        }
    void qs(vector<int>& nums,int low , int high){
        if(low<high){
            int pindex=f(nums,low,high);
            qs(nums,low,pindex-1);
            qs(nums,pindex+1,high);

        }
    }
    vector<int> quickSort(vector<int>& nums) {
        qs(nums,0 ,nums.size()-1);
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
        vector<int>  result = quickSort(nums);
        for (int val : result) {
        cout << val << " ";}
    }