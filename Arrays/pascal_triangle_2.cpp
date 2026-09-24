#include<bits/stdc++.h>
using namespace std;
    int pascalTriangleI(int r, int c) {
        int row = r-1;
        int col = c-1;
        long long res = 1;
        for(int i=0;i<col;i++){
            res=res*(row-i);
            res=res/(i+1);
        }
        return res;

    }
    vector<int> getRowB(int r) {   // brute
        vector<int> ans;
        int row =r+1;
        for(int i =1;i<=row;i++){
            int res =pascalTriangleI(row,i);
            ans.push_back(res);
        }
        return ans;
    }
    vector<int> getRowO(int r){
        vector<int> ans;
        int row=r+1;
        long long a=1;
        for(int i=0;i<row;i++){
            if(i==0){
                ans.push_back(a);
                continue;
            }
            a=a*(r-i+1);
            a=a/(i);
            ans.push_back(a);
        }
        return ans;
    }

int main(){
    int r = 3;
    vector<int> result = getRowO(r);
    for(auto it : result){
        cout<<it<<" ";
    }

    return 0;
}