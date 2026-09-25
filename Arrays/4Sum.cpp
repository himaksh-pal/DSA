#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& arr, int target) { // better
        int n = arr.size();
        set<vector<int>> st;
        for(int i =0 ;i<n ; i++){
            for(int j = i+1;j<n;j++){
                set<long long> hashSet;
                for(int k = j+1;k<n;k++){
                    long long sum = arr[i]+arr[j];
                    sum+=arr[k];
                    long long fourth= target-(sum);
                    if(hashSet.find(fourth)!=hashSet.end()){
                        vector<int> temp = {arr[i],arr[j],arr[k],int(fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }

                    hashSet.insert(arr[k]);
                }            
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }

vector<vector<int>> fourSumO(vector<int>& arr, int target){ //optimal
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i =0 ;i<n ;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j= i+1;j<n;j++){
            if(j!=(i+1) && arr[j]==arr[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = arr[i];
                sum+=arr[j];
                sum+=arr[k];
                sum+=arr[l];
                if(sum==target){
                    vector<int> temp = {arr[i],arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]) k++; 
                    while(k<l && arr[l]==arr[j+1]) l--; 
                }
                else if(sum<target) k++;
                else l--;
            }
        }
    }
    return ans;
} 
int main(){
    int n = 6;
    vector<int> nums(n);
    int target = 0;
    nums={1,0,-1,0,-2,2};
    vector<vector<int>> arr = fourSumO(nums,target);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
    cout<<"\n";
}
    return 0;
}
