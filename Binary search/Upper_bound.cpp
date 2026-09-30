#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int x){
        int n = arr.size();
        int beg = 0;
        int end = n-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(arr[mid]<=x){
                n=max(n,mid);
                beg=mid+1;
                
            }
            else{
                end=n-1;
            }
        }
        return n;
    }

int main(){
    int x = 8;
    vector<int> arr ={1,2,3,3,7,8,9,9,9,11};
    int res = upperBound(arr,x);
    cout<<" index : "<<res;
    return 0;
}