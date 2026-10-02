#include <bits/stdc++.h>
using namespace std;
vector<int> getFloorAndCeil(vector<int> arr, int x) {
        int n = arr.size();
        int floor = -1;
        int ceil = -1;
        int low = 0 , high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]<=x){
                floor=arr[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low = 0;
        high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>=x){
                ceil=arr[mid];
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {floor,ceil};
    }
int main(){
    vector<int> arr = {10,20,25,30,40,50};
    int x = 25;
    vector<int> ans = getFloorAndCeil(arr,x);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
