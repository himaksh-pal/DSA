#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementMB(vector<int>& arr) { // brute MY
        int n = arr.size();
        set<int>st;
        for(int i =0;i<n;i++){
            int cnt=0;
            for(int j =0;j<n;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            if(cnt>(n/3)){
                st.insert(arr[i]);
            }
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
vector<int> majorityElementM(vector<int>& arr) { // better MY
        int n = arr.size();
        vector<int> ans;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second > (n/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
vector<int> majorityElementMO(vector<int> & arr){ //optimal MY
    int n = arr.size();
vector<int> ans;
sort(arr.begin(), arr.end());
for (int i = 0; i < n; i++) {
    if (i > 0 && arr[i] == arr[i-1]) continue;
    int cnt = 1;
    int j = i + 1;
    while (j < n && arr[j] == arr[i]) {
        cnt++;
        j++;
    }
    if (cnt > n / 3) {
        ans.push_back(arr[i]);
    }
}
return ans;
}
int main(){
    vector<int> arr = {3,2,3};
    vector<int> res = majorityElementMO(arr);
    for(auto it : res){
        cout<<it<<" ";
    }
    return 0;
}