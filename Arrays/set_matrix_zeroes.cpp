#include<bits/stdc++.h>
using namespace std;
// void MarkRow(vector<vector<int>>& arr,int i){    brute
//         int col = arr[0].size();
//         for(int j=0;j<col;j++){
//             if(arr[i][j]!=0){
//                 arr[i][j]=-1;
//             }
//         }

//     }
//     void MarkCol(vector<vector<int>>& arr,int j){
//         int row = arr.size();
//         for(int i=0;i<row;i++){
//             if(arr[i][j]!=0){
//                 arr[i][j]=-1;
//             }
//         }

//     }
//     void setZeroes(vector<vector<int>>& arr) {
//         int col = arr[0].size();
//         int row = arr.size();
//         for(int i =0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(arr[i][j]==0){
//                     MarkRow(arr,i);
//                     MarkCol(arr,j);
//                 }
//             }
//         }
//         for(int i =0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 if(arr[i][j]==-1){
//                     arr[i][j]=0;
//                 }
//             }
//         }
        
//     }

    void setZeroes(vector<vector<int>>& arr) {  // better
        int n = arr.size();
        int m = arr[0].size();
        int row[n]={0};
        int col[m]={0};
        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < m ; j ++ ){
                if(arr[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i = 0 ; i < n ; i ++ ){
            for(int j = 0 ; j < m ; j ++ ){
                if(row[i]==1 || col[j]==1 ){
                    arr[i][j]=0;
                }
            }
        }
        
    }

    void setZeroesO(vector<vector<int>>& arr) {  // optimal
        int n = arr.size();
        int m = arr[0].size();
        //int col[m]; --> arr[0][..]
        //int row[n]; --> arr[..][0]
        int col0=1;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    //mark the i-th row
                    arr[i][0]=0;
                    //mark the j-th col
                    if(j!=0){
                        arr[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][j]!=0){
                    //check for row & col
                    if(arr[0][j]==0 || arr[i][0]==0){
                        arr[i][j]=0;
                    }
                }
            }
        }
        if(arr[0][0]==0){
            for(int j=0;j<m;j++){
                arr[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<n;i++){
                arr[i][0]=0;
            }
        }
        
    }


int main(){
    vector<vector<int>> arr = {
    {0,1,2,0},{3,4,5,2},{1,3,1,5}

    };
    setZeroesO(arr);
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[i].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
}
    return 0;
}