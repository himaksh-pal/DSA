#include <bits/stdc++.h>
using namespace std;
int reversePairsMB(vector<int>& arr) {  // brute MY
                long long n = arr.size();
        long long cnt=0;
        for(long long i =0;i<n;i++){
            for(long long j = i ; j<n;j++){
                long long b = 2* (long long)arr[j];
                long long a = arr[i];
                if( (i<j) && (a > b)){
                    cnt++;
                }
            }
        }
        return (int)cnt;

    }

int main(){
    vector<int> arr = {6, 4, 4, 2, 2};
    int res = reversePairsMB(arr);
    cout<<"Pairs : "<<res;
    return 0;
}