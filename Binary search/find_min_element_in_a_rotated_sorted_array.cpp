#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& arr) {
        int low = 0 , high = arr.size() - 1 , mini=5001;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[low]<=arr[high]){           // further optimisation condition
                mini=min(arr[low],mini);
                break;
            }
            if(arr[low]<=arr[mid]){
                mini=min(mini,arr[low]);
                low=mid+1;
            }
            else{
                mini=min(mini,arr[mid]);
                high=mid-1;
            }
        }
        return mini;
        
    }
int main(){
    vector<int> arr ={4, 5, 6, 7, 0, 1, 2, 3};
    int res = findMin(arr);
    cout<<res;
    return 0;
}