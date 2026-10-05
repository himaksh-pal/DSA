#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr)  {
        int low = 0 , high = arr.size() - 1 , mini=5001,idx=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[low]<=arr[high]){           
                if(arr[low]<mini){
                    mini=arr[low];
                    idx=low;
                }
                break;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<mini){
                    mini=arr[low];
                    idx=low;
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<mini){
                    mini=arr[mid];
                    idx=mid;
                }
                high=mid-1;
            }
        }
        return idx;
    }
    int main(){
    vector<int> arr ={4,5,6,7,0,1,2};
    int ans = findKRotation(arr);
    cout<<"times : "<<ans;
    return 0;
    }