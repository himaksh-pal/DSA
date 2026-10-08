#include <bits/stdc++.h>
using namespace std;
int divisor(vector<int> & arr,int x){
    int n = arr.size();
    int sum=0;
    for(int i = 0;i<n;i++){
        sum += ceil((double)arr[i] / x);
    }
    return sum;
}
int minEatingSpeed(vector<int>& arr, int hours) {
        int low = 1, high = *max_element(arr.begin(), arr.end());
        int k=-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(divisor(arr,mid)<=hours){
                k= mid;
                high =  mid -1;
            }
            else low = mid + 1;
        }
        return k;
    }
int main(){
    vector<int> arr ={1,2,5,9};
    int hours = 6;
    cout<<minEatingSpeed(arr,hours);
    
}