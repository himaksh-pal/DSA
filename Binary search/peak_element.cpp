#include<bits/stdc++.h>
using namespace std;
// int findPeakElement(vector<int>& arr) {              // my brute 
//     int n = arr.size();
//     for(int i =1;i<n-1;i++){
//         if(arr[i-1]<arr[i] && arr[i]>arr[i+1]) return i;
//     }
//     if(arr[0]>arr[1]) return 0;
//     return n-1;
        
//     }
// int findPeakElement(vector<int>& arr) {                    // sir brute
//     int n = arr.size();
//     for(int i =0 ;i<n;i++){
//         if((i==0 || arr[i-1]<arr[i])  &&  (i==(n-1) || arr[i]>arr[i+1])) return i;
//     }
//     return -1;
// }

int findPeakElement(vector<int>& arr){
    int n = arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low =1 , high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if ( arr[mid]>arr[mid -1]) low = mid +1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,2};
    cout<<findPeakElement(arr);
    return 0;
}