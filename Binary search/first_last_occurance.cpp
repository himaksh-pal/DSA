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
vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int lb = lowerBound(arr,target);
        if((lb == n) || (arr[lb] != target)) return {-1,-1};
        return {lb,(upperBound(arr,target)-1)};
    }
int main(){
    vector<int> arr ={5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(arr,target);
    for(auto it : ans){
        cout<<it<<" ";
    }
}