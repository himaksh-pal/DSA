#include <bits/stdc++.h>
using namespace std;
// bool bs(vector<int> arr,int target,int col){    // brute 
//         int low=0;
//         int high=col-1;
//         while(low<=high){
//             int mid =(low+high)/2;
//             if(arr[mid]==target) return true;
//             else if(arr[mid]<target) high = mid-1;
//             else low=mid+1;
//         }
//         return false;
//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         for(int i =0 ;i<row;i++){
//             if(matrix[i][0]<=target && matrix[i][col-1]>=target){
//                 if(bs(matrix[i],target,col)==1) return true;
//                 else continue;
//             }
//         }
//         return false;
//     }


bool searchMatrix(vector<vector<int>>& matrix, int target) {   // optimal sir TC -> O(log(n*m))
    int n = matrix.size();
    int m= matrix[0].size();
    int low=0;
    int high=(n*m -1);
    while(low<=high){
        int mid = (low+high)/2;
        int row=mid/m;
        int col = mid%m;
        if(matrix[row][col]==target) return true ;
        else if(matrix[row][col]<target) low= mid+1;
        else high=mid-1;
    }
    return false;
}
int main(){
    int target=16;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix,target);
    return 0;
}