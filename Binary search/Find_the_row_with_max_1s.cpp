#include <bits/stdc++.h>
using namespace std;
// int rowWithMax1s(vector<vector<int>> &arr) {
//     int col = arr[0].size();
//     int row = arr.size();
//     int flag =0;
//     int max1=-1;
//     int idx=-1;
//     for(int i =0 ; i<row;i++){
//         int cnt1=0;
//         for(int j =0 ; j<col;j++){
//             if(arr[i][j]==1) {
//                 cnt1++;
//                 flag=1;
//             }
//         }
//         if(max1<cnt1){
//             max1=cnt1;
//             idx=i;
//         }
//     }
//     if(flag==0) return -1;
//     return idx;
//     }

int lowerBound(vector<int> arr,int n ,int x){           // optimal sir
    int low=0,high=n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else low= mid+1;
    }
    return ans;

}
int rowWithMax1s(vector<vector<int>> &matrix) {
    int col = matrix[0].size();
    int row = matrix.size();
    int cnt_max=0;
    int index=-1;
    for(int i =0 ; i<row;i++){
        int cnt_ones = col - lowerBound(matrix[i],col,1);
        if(cnt_ones>cnt_max){
            cnt_max=cnt_ones;
            index=i;
        }
    }
    return index;
}
    
int main(){
    vector<vector<int>> arr = { {1, 1, 1}, {0, 0, 1}, {0, 0, 0} };
    cout<<rowWithMax1s(arr);
    return 0;
}