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
int smallestDivisor(vector<int>& arr, int threshold) {
        int low = 1, high = *max_element(arr.begin(), arr.end());
        int mini=-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(divisor(arr,mid)<=threshold){
                mini= mid;
                high =  mid -1;
            }
            else low = mid + 1;
        }
        return mini;
    }
int main(){
    vector<int> arr ={1,2,5,9};
    int threshold = 6;
    cout<<smallestDivisor(arr,threshold);
    
}