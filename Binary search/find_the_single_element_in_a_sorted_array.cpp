#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicateM(vector<int> & arr){  // my code
    int low =0,high = arr.size() -1;
    while(low<=high){
        int  mid = (low+high)/2;
        if(low==high) return arr[low];
        if(mid%2==0){
            if(arr[mid+1]==arr[mid]) low = mid+2;
            else high = mid;
        }
        else{
            if(arr[mid-1]==arr[mid]) low = mid +1;
            else high= mid-1;
        }
    }
    return -1;
}

int singleNonDuplicate(vector<int>& arr) {
        // Left boundary of the current search range.
        int low = 0;
 
        // Right boundary of the current search range.
        int high = (int)arr.size() - 1;
 
        // Keep shrinking the range until only one position remains.
        while (low < high) {
            // Calculate the middle index safely.
            int mid = low + (high - low) / 2;
 
            // Move to the first index of the expected pair.
            if (mid % 2 == 1) {
                mid--;
            }
 
            // A proper pair means the single element is further right.
            if (arr[mid] == arr[mid + 1]) {
                low = mid + 2;
            } 
            else {
                // The broken pair means the answer is at mid or to the left.
                high = mid;
            }
        }
 
        return arr[low];
    }

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int res = singleNonDuplicate(arr);
    cout<<res;
    return 0;
}