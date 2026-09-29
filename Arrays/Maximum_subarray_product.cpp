#include<bits/stdc++.h>
using namespace std;
int maxProductMB(vector<int>& arr) { //brute MY
        int n = arr.size();
        long long maxi =INT_MIN;
        for(int i = 0;i<n;i++){
            long long product=1;
            for(int j =i;j<n;j++){
                product=product*arr[j];
                maxi= max(product,maxi);

            }
        }
        return (int)maxi;
    }

int maxProductO(vector<int>& arr) {   //optimal
        int n = arr.size();
        int pre = 1;
        int suff = 1;
        int ans = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            if(pre==0) pre=1;
            if(suff==0) suff=1;

            pre=pre*arr[i];
            suff=suff*arr[n-i-1];
            ans=max(ans,max(pre,suff));
        }
        return ans;
    }
int main(){
    vector<int> arr ={1,0,-5,2,3,-8,-9 };
    int res = maxProductO(arr);
    cout<<"max product : "<<res;
    return 0;
}