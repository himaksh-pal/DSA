#include <bits/stdc++.h>
using namespace std;
int reversePairsMB(vector<int>& arr) {  // brute MY
        int n = arr.size();
        int cnt=0;
        for(int i =0;i<n;i++){
            for(int j = i ; j<n;j++){
                if( (i<j) && (arr[i] > 2* (long long)arr[j])){
                    cnt++;
                }
            }
        }
        return (int)cnt;

    }

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
int cntPair(vector<int>& nums , int low, int mid , int high){
    int cnt =0;
    int right = mid+1;
    for(int i = low ;i<=mid;i++){
        while(right<=high && nums[i]> 2*(long long)nums[right]) right++;
        cnt+= (right - (mid+1));
    }
    return cnt;
}
int mergeSort(vector<int>& nums, int low ,int high) {
    int cnt=0;
    //base condition
    if(low==high)
    return cnt;

    // for dividing
    int mid=(low+high)/2;
    cnt += mergeSort(nums,low ,mid);
    cnt += mergeSort(nums,mid+1,high);  
    cnt += cntPair(nums ,low,mid, high); 

    //for merging the vector
    merge(nums,low,mid,high);
    return cnt;

    }
int reversePairsO(vector<int>& arr) {
    int n = arr.size();
    return mergeSort(arr,0,n-1);

}

int main(){
    vector<int> arr = {2147483647,1073741824};
    int res = reversePairsO(arr);
    cout<<"Pairs : "<<res;
    return 0;
}