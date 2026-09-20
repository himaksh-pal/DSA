#include<bits/stdc++.h>
using namespace std;
vector<int> leadersMB(vector<int>& a) { // brute MY
        int n = a.size();
        vector<int> temp;
        for(int i = 0;i<n;i++){
            int  flag = 0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                temp.push_back(a[i]);
            }
        }
        
        
        return temp;
    }
vector<int> leadersO(vector<int>& a){ //optimal
    int n = a.size();
    int maxi = INT_MIN;
    vector<int> ans;
    for(int i = n-1;i>=0;i--){
        if(a[i]> maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    return ans;
}
int main(){
    vector<int> nums;
    nums={10,22,12,3,0,6};
    vector<int> result = leadersO(nums);
    for(auto val : result){
        cout<<val<<" ";
    }

    return 0;
}