#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums){ //optimal
    int n = nums.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)return;
    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
   
    
void moveZeroesB(vector<int> &nums) //brute
{
    int n = nums.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.emplace_back(nums[i]);
        }
    }
    int t = temp.size();
    for (int i = 0; i < n; i++)
    {
        if (i < t)
        {
            nums[i] = temp[i];
        }
        else
        {
            nums[i] = 0;
        }
    }
    
}
int main()
{
    cout << "Enter the size of the array : ";
    int n;

    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of vector : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    moveZeroes(nums);
    for (int val : nums)
    {
        cout << val << " ";
    }

    return 0;
}