#include <bits/stdc++.h>
using namespace std;
     bool search(vector<int>& arr, int x) {
        int low = 0 , high = arr.size() - 1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==x) return true;
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            if(arr[low]<= arr[mid]){
                if(arr[low]<=x && x<=arr[mid]) high = mid-1;
                else low= mid+1;
            }
            else{
                if(arr[mid]<=x && x<=arr[high]) low=mid+1;
                else high = mid-1; 
            }
        }
        return false;
    } 

int main(){
    vector<int> arr ={1,0,1,1,1};
    int target =0;
    bool res = search(arr,target);
    cout<<res;
    return 0;
}