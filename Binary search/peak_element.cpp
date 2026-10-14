#include<bits/stdc++.h>
using namespace std;
// int findPeakElement(vector<int>& arr) {              // my brute 
//     int n = arr.size();
//     for(int i =1;i<n-1;i++){
//         if(arr[i-1]<arr[i] && arr[i]>arr[i+1]) return i;
//     }
//     if( INT_MIN < arr[0] && arr[0]>arr[1]) return 0;
//     return n-1;
        
//     }
int findPeakElement(vector<int>& arr) {
    int n = arr.size();
    for(int i =0 ;i<n;i++){
        if((i==0 || arr[i-1]<arr[i])  &&  (i==(n-1) || arr[i]>arr[i+1])) return i;
    }
    return -1;
}
int main(){
    vector<int> arr={1,2,3,1};
    cout<<findPeakElement(arr);
    return 0;
}