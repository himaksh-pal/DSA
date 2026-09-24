#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSumMB(vector<int>& arr) { // brute MY
        int n = arr.size();
        vector<vector<int>> ans;
            for(int i=0;i<n;i++){
                for(int j =i+1;j<n;j++){
                    for(int k =j+1;k<n;k++){

                        if(arr[i]+arr[j]+arr[k]==0){
                            vector<int> temp;
                            temp.push_back(arr[i]);
                            temp.push_back(arr[j]);
                            temp.push_back(arr[k]);
                            sort(temp.begin(),temp.end());
                            if (find(ans.begin(), ans.end(), temp) == ans.end()) {
                                ans.push_back(temp);
                            } 
                        }
                    }
                }
            }
            return ans;
    }
vector<vector<int>> threeSum(vector<int>& arr) { //better
    int n = arr.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        set<int> hashset;
        for(int j =i+1;j<n;j++){
            int third = -(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp ={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }

    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

vector<vector<int>> threeSumO(vector<int>& arr) { //optimal
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<0) j++;
                else if(sum>0) k--;
                else{
                    vector<int> temp = { arr[i],arr[j],arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]) j++;
                    while(j<k && arr[k]==arr[k+1]) k--;
                }
            }
        }

    return ans;}
int main(){
    int n = 6;
    vector<int> nums(n);
    nums={-1,0,1,2,-1,-4};
    vector<vector<int>> arr = threeSumO(nums);
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
    cout<<"\n";
}
    return 0;
}