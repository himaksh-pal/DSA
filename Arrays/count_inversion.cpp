#include <bits/stdc++.h>
using namespace std;
long long cntCount(vector<int>&nums,int low ,int mid ,int high){
    int left=low;
    int right=mid+1;
    long long cnt =0;
    vector<int> temp;
    
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            cnt+=(mid-left+1);
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
    return cnt;
}
long long mergeSort(vector<int>& arr , int low , int high  ){
    long long cnt =0;
    if(low>=high) return cnt;
    int n = arr.size();
    int mid = (low+high)/2;
    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid+1,high);
    cnt +=cntCount(arr,low,mid, high);
    return cnt;
}
long long int numberOfInversionsO(vector<int> arr) {            // optimal
    int n = arr.size();
    return mergeSort(arr, 0, n-1);

}
int main(){
    vector<int> arr ={5,4,-4,4};
    long long int res = numberOfInversionsO(arr);
    cout<<"No . of pairs : "<<res;
    return 0;
}