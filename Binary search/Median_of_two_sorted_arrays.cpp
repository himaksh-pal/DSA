#include <bits/stdc++.h>
using namespace std;
// double median(vector<int> &arr1, vector<int> &arr2) {  // brute my 
//     int n = arr1.size();
//     int m = arr2.size();
//     vector<int> sum(n+m);
//     for(int i =0;i<(n);i++){
//         sum[i]=arr1[i];
//     }
//     for(int i = 0 ;i<(m);i++){
//         sum[n+i]=arr2[i];
//     }
//     sort(sum.begin(),sum.end());
//     if((n+m)%2!=0){
//         int ans =((m+n)/2);
//         return sum[ans] ;
//     }
//     else{
//         int  ans = (m+n)/2;  
//         return ((double)(sum[ans]+sum[ans-1])/2);
//     } 
//     return -1;

//     }

// double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2){  // brute (2 pointer ) my
//     int n = arr1.size();
//     int m = arr2.size();
//     int i =0;
//     int j =0;
//     vector<int> sum;
//     while(i<n && j<m){
//         if(arr1[i]<=arr2[j]){
//             sum.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             sum.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while(j<m){
//         sum.push_back(arr2[j]);
//         j++;
//     }
//     while(i<n){
//         sum.push_back(arr1[i]);
//         i++;
//     }
//     int N = sum.size();
//     if((n+m)%2!=0){
//         int ans =N/2;
//         return sum[ans] ;
//     }
//     else{
//         int  ans = N/2;  
//         return ((double)(sum[ans]+sum[ans-1])/2);
//     } 
//     return -1;
// }



// double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2){   // better approach (reducing space complexity) sir 
//     int n = arr1.size();
//     int m = arr2.size();
//     int i =0;
//     int j =0;
//     int N = n+m;
//     int ind2=N/2;
//     int ind1=ind2-1;
//     int ind1el=-1,ind2el=-1;
//     int cnt =0;
//     while(i<n && j<m){
//         if(arr1[i]<=arr2[j]){
//             if(cnt==ind1) ind1el=arr1[i];
//             if(cnt==ind2) ind2el=arr1[i];
//             cnt++;
//             i++;
//         }
//         else{
//             if(cnt==ind1) ind1el=arr2[j];
//             if(cnt==ind2) ind2el=arr2[j];
//             cnt++;
//             j++;
//         }
//     }
//     while(j<m){
//         if(cnt==ind1) ind1el=arr2[j];
//         if(cnt==ind2) ind2el=arr2[j];
//         cnt++;
//         j++;
//     }
//     while(i<n){
//         if(cnt==ind1) ind1el=arr1[i];
//         if(cnt==ind2) ind2el=arr1[i];
//         cnt++;
//         i++;
//     }
//     if(N%2==1) return ind2el;
//     return ((double)(ind1el+ind2el)/2.0);

// }


double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();    
    int N = n+m;
    int ind2=N/2;
}
int main(){
    vector<int> arr1 = {2, 4, 6};
    vector<int> arr2 = {1, 3,5};
    cout<<findMedianSortedArrays(arr1,arr2);
    return 0;
}
