#include <bits/stdc++.h>
using namespace std;
// int findKthPositive(vector<int>& arr, int k) {   //my
//         int n = arr.size();
//         int max = INT_MAX;
//         int i =0;
//         int cnt=0;
//         for(int j=1;j<=max;j++){
//             if(i==n) i=n-1;
//             if(j!=arr[i]){
//                 cnt++;
//             }
//             else i++;
//             if(cnt==k) return j;
//         }
//         return -1;
        
//     }
    // int findKthPositive(vector<int>& arr, int k){ // sir  (linear search)
    //     int n = arr.size();
    //     for(int i =0 ;i<n;i++){
    //         if (arr[i]<=k) k++;
    //         else break;
    //     }
    //     return k;
    // }

    int findKthPositive(vector<int>& arr, int k) {     // sir (binary search)
        int n = arr.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid= (low+high)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k) low=mid+1;
            else high = mid -1;
        }
        return k+high+1;
        
    }
int main(){
    vector<int> arr ={2,3,4,7,11};
    int k = 5;
    cout<<findKthPositive(arr,k);

}