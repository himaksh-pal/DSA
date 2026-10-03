#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &arr, int x){
        int n = arr.size();
        int beg = 0;
        int end = n-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(arr[mid]>=x){
                n=mid;
                end=n-1;
            }
            else{
                beg=mid+1;
            }
        }
        return n;
    }
int upperBound(vector<int> &arr, int x){
        int n = arr.size();
        int beg = 0;
        int end = arr.size()-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(arr[mid]>x){
                n=mid;
                end = mid-1;
            }
            else if(arr[mid]<=x){
                beg= mid+1;
            }
        }
        return n;
    }
vector<int> searchRangeLU(vector<int>& arr, int target) { // with lower and upper bound
        int n = arr.size();
        int lb = lowerBound(arr,target);
        if((lb == n) || (arr[lb] != target)) return {-1,-1};
        return {lb,(upperBound(arr,target)-1)};
    }
int firstOccurance(vector<int> & arr,int x){
    int n = arr.size();
    int low=0,high = n-1;
    int first=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x) low=mid+1;
        else high = mid-1;
    }
    return first;
}
int lastOccurance(vector<int> & arr,int x){
    int n = arr.size();
    int low=0,high = n-1;
    int last=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x) low=mid+1;
        else high = mid-1;
    }
    return last;
}
vector<int> searchRange(vector<int>& arr, int x) { // with normal binary search
    int first = firstOccurance(arr,x);
    if(first==-1) return {-1,-1};
    int last = lastOccurance(arr,x);
    return {first,last};
}
int main(){
    vector<int> arr ={5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(arr,target);
    for(auto it : ans){
        cout<<it<<" ";
    }
}