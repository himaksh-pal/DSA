#include<bits/stdc++.h>
using namespace std;
void rotateB(vector<vector<int>>& arr) { //brute
        int n = arr.size();
        vector<vector<int>> ans(n,vector<int>(n,0) );
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-1-i]=arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=ans[i][j];
            }
        }

        

    }
void rotateO(vector<vector<int>>& arr) { //optimal
    int n = arr.size();
    for(int i =0 ;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main(){
    vector<vector<int>> arr ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotateO(arr);
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[i].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
}
    return 0;
}