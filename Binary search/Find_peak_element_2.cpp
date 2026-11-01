#include<bits/stdc++.h>
using namespace std;
vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
    }
int main(){
    vector<vector<int>> mat = {{1,4},{3,2}};
    vector<int>result=findPeakGrid(mat);
    for(auto it : result){
        cout<<it<<" ";
    }
    return 0;
}