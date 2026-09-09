#include<vector>
#include <iostream>
using namespace std;
void merge(vector<int> &nums,int low , int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    // if one of the divided vector gets exhuasted then the non exhuasted vector will copied as it is in the temp
    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    }
    while (right<=high)
    {
        temp.push_back(nums[right]);
            right++;
    }
    
    //to copy the elements of temp in nums
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    
}


void mergeSort(vector<int>& nums, int low ,int high) {
    //base condition
    if(low==high)
    return ;

    // for dividing
    int mid=(low+high)/2;
    mergeSort(nums,low ,mid);
    mergeSort(nums,mid+1,high);   

    //for merging the vector
    merge(nums,low,mid,high);

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
        mergeSort(nums,0,n-1);
for (int val : nums) {
    cout << val << " ";
}
    return 0;
}