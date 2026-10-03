#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int x) {
        int n = arr.size();
        int idx=-1;
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low + high)/2;
            if (arr[mid]==x){
                return mid ;
            }
            else if(arr[low]<=arr[mid] && )
        }
    }
int main(){
    vector<int> arr ={4,5,6,7,0,1,2};
    int target =0;
    int ans = search(arr,target);
    cout<<"Index : "<<ans;
    return 0;
}