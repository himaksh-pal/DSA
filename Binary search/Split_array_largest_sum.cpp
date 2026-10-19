#include <bits/stdc++.h>
using namespace std;
int check(vector<int> & arr , int i ){
        int n = arr.size();
        int num_split=1;
        int sum=0;
        for(int j =0;j<n;j++){
            if(arr[j]+sum<=i) sum+=arr[j];
            else{
                num_split++;
                sum=arr[j];
            }

        }
        return num_split ;
    }
    // int splitArray(vector<int>& arr, int k) {           // linear search my
    //     int n = arr.size();
    //     int low=*max_element(arr.begin(),arr.end());
    //     int sum =0;
    //     for(int i =0 ; i<n;i++) sum+=arr[i];
    //     int high = sum ;
    //     for(int i = low ; i<=high; i++){
    //         if(check(arr,i)<=k) return i;
    //     }
    //     return -1;
    // }

int splitArray(vector<int>& arr, int k){            // binary search my
    int n = arr.size();
    int low=*max_element(arr.begin(),arr.end());
    int sum =0;
    for(int i =0 ; i<n;i++) sum+=arr[i];
    int high = sum ;
    while(low<=high){
        int mid =(low+high)/2;
        if(check(arr,mid)<=k) high = mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    int k = 2;
    vector<int> arr ={1,2,3,4,5};
    cout<<splitArray(arr,k); 
}