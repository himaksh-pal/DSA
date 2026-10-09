#include <bits/stdc++.h>
using namespace std;
int check(vector<int>& arr,int d,int i){
        int ans=0;
        int n = arr.size();
        int sum =0;
        int j =0;
        while(j<n){
            sum = sum + arr[j];
            if(sum<=i) j++;
            else{
                sum = 0;
                ans++;
            }


        }
        if (ans==d) return i;
        return -1; 
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int low= *max_element(arr.begin(),arr.end());
        int high =100;
        int ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if (check(arr,d,mid)!=-1){
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
    cout<<check(arr,d,15);
    return 0;
}    