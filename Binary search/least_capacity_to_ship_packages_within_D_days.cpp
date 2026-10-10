#include <bits/stdc++.h>
using namespace std;
int check(vector<int>& arr,int d,int i){
        int ans=1;
        int n = arr.size();
        int sum =0;
        for(int j = 0;j<n;j++){
            if(sum+arr[j]>i){
                ans++;
                sum=arr[j];
            }
            else sum=sum + arr[j];
        }
        return ans;
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int low= *max_element(arr.begin(),arr.end());
        int sum =0;
        int n = arr.size();
        for(int i =0;i<n;i++){
            sum=sum+arr[i];
        }
        int high =sum;
        int ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            int days = check(arr,d,mid);
            if (days<=d){
                ans = mid;
                high= mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }

int main(){
    int d = 5;
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    cout<<shipWithinDays(arr,d);
    return 0;
}    