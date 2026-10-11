#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int max = INT_MAX;
        int i =0;
        int cnt=0;
        for(int j=1;j<=max;j++){
            if(i==n) i=n-1;
            if(j!=arr[i]){
                cnt++;
            }
            else i++;
            if(cnt==k) return j;
        }
        return -1;
        
    }
int main(){
    vector<int> arr ={2,3,4,7,11};
    int k = 5;
    cout<<findKthPositive(arr,k);

}