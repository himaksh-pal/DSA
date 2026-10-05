#include <bits/stdc++.h>
using namespace std;
     int search(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low + high)/2;
            if (arr[mid]==x){
                return mid ;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<= x && x<=arr[mid])  high = mid -1;
                else low = mid +1; 
                
            }
            else{
                if(arr[mid]<=x && x<=arr[high] )  low = mid+1;
                else high = mid -1;
            }
        }
        return -1;
    }

int main(){
    vector<int> arr ={4,5,6,7,0,1,2};
    int target =5;
    int ans = search(arr,target);
    cout<<"Index : "<<ans;
    return 0;
}