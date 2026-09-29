#include<bits/stdc++.h>
using namespace std;
int searchMO(vector<int> &arr, int target){ //optimal MY
    int n = arr.size();
    int beg =0;
    int end = n-1;
    while(beg<=end){
        int mid = (beg+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr ={-1,0,3,5,9,12};
    int target = -1;
    int res = searchMO(arr,target);
    cout<<"Index : "<<res;
    return 0;
}