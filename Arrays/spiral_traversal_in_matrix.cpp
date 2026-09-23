#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrderO(vector<vector<int>>& arr) { //optimal
        int n = arr.size();
        int m = arr[0].size();
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;
        vector<int> ans;
        // int times =-1;
        // if(n=<m){
        //     times=n/2;
        // }
        // else{
        //     times=m/2;
        // }
        while(top<=bottom && left<=right){
            for(int i = left ; i<=right;i++){
                ans.push_back(arr[top][i]);
            }
            top++;
            for(int i = top ; i<=bottom;i++){
                ans.push_back(arr[i][right]);
            }
            if(top<=bottom){
                right--;
                for(int i = right ; i>=left;i--){
                    ans.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i = bottom ; i>=top;i--){
                    ans.push_back(arr[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
int main(){
    vector<vector<int>> arr ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    vector<int> result =spiralOrderO(arr);
    for(auto it : result){
        cout<<it<<" ";
    }
    return 0;
}