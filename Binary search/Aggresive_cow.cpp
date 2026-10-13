#include<bits/stdc++.h>
using namespace std;
bool CanCowBePlaced(vector<int>&arr,int i ,int k){
    int n = arr.size();
    int cow_cnt=1;
    int pre_cow=arr[0];
    for(int j=1;j<n;j++){
        if((arr[j]-pre_cow)>=i){
            cow_cnt++;
            pre_cow=arr[j];
        }
        else{
            continue;
        }
        
    }
    if(cow_cnt>=k) return true;
    return false ;
}
// int aggressiveCows(vector<int> &arr, int k) {   // linear search 
//         int n = arr.size();
//         sort(arr.begin(),arr.end());
//         for(int i=2;i<=(*max_element(arr.begin(),arr.end())-(*min_element(arr.begin(),arr.end())));i++ ){
//             if(CanCowBePlaced(arr,i,k)==true){
//                 continue;
//             }
//             else{
//                 return (i-1);
//             }
//         }
//         return -1;
//     }

int aggressiveCows(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int low =0;
    int high = arr[arr.size()-1]-arr[0];
    int ans=-1;
    while(low<=high){
        long long mid = (low+high)/2;
        if(CanCowBePlaced(arr,mid,k)==true){
            ans=(int)mid;
            low=mid+1;

        }
        else high = mid-1;
    }
    return ans;
}
int main(){
    int k = 4;
    vector<int> arr={0,3,4,7,10,9};
    cout<<aggressiveCows(arr,k);
    return 0;
}