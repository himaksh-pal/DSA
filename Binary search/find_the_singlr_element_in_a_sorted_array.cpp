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
int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int res = singleNonDuplicateM(arr);
    cout<<res;
    return 0;
}