#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &arr, int x){
        int n = arr.size();
        int beg = 0;
        int end = n-1;
        while(beg<=end){
            int mid = (beg+end)/2;
            if(arr[mid]>=x){
                n=mid;
                end=n-1;
            }
            else{
                beg=mid+1;
            }
        }
        return n;
    }

int main(){
    int x = 10;
    vector<int> arr ={1,2,3,3,7,8,9,9,9,11};
    int res = searchInsert(arr,x);
    cout<<" index : "<<res;
    return 0;
}