#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int x){
        int n = arr.size();
        int beg = 0;
        int end = arr.size()-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(arr[mid]>x){
                n=mid;
                end = mid-1;
            }
            else if(arr[mid]<=x){
                beg= mid+1;
            }
        }
        return n;
    }

int main(){
    int x = -18095;
    vector<int> arr ={-94183,-91340,-87112,-72026,-65639,-24479,-12167,29555,37240,49615,67123,67800};
    int res = upperBound(arr,x);
    cout<<" index : "<<res;
    return 0;
}