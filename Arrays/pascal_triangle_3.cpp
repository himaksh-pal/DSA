#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int r){
    vector<int> ansRow;
    long long res =1;
    ansRow.push_back(1);
    for(int i =1;i<r;i++){
        res=res*(r-i);
        res=res/i;
        ansRow.push_back(res);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangleO(int numRows) {//optimal
        vector<vector<int>> ans;
        for(int i = 1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
main(){
    int r = 6;
    vector<vector<int>> arr = pascalTriangleO(r);
    for (int i = 0; i < arr.size(); i++) { 
        for(int k =r-1;k>i;k--){
            cout<<" ";

        }
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
    cout << "\n";
}

    return 0;
}