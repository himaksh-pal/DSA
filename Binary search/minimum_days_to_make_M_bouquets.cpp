#include <bits/stdc++.h>
using namespace std;
int check(vector<int>&arr,int m,int k,int i){
    int n = arr.size();
    int cnt=0;
    int ans =0;
    for(int j =0;j<n;j++){
        if(arr[j]<=i){
            cnt++;
            if(cnt==k){
                ans++;
                cnt=0;
            }
        }
        else cnt=0;
    }
    if(ans>=m) return i;
    return -1;
}
int minDays(vector<int>& arr, int m, int k) {  // linear 
        int a = *max_element(arr.begin(),arr.end());
        int days=INT_MAX;
        for(int i =1;i<=a;i++){
            if(check(arr,m,k,i)!=-1){
                days=min(days,check(arr,m,k,i));
            }
        }
        if(days==INT_MAX) return -1;
        return days;
    }

int minDaysO(vector<int> & arr,int m,int k){    // binary search
    int low = 1, high = *max_element(arr.begin(), arr.end());
        int day=-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(check(arr,m,k,mid)!=-1){
                day= mid;
                high =  mid -1;
            }
            else low = mid + 1;
        }
        return day;
}

int main(){
    int m= 1;
    int k =1;
    vector<int>arr ={1000000000,1000000000};
    cout<<minDaysO(arr,m,k);
    return 0;
}