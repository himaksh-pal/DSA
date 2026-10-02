#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> & arr,int idx,int num){
    int n = arr.size();
    for(int i =n-1;i>idx;i--){
        swap(arr[i],arr[i-1]);

    }
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            arr[i]=num;
        }
    }
}
int main(){
    vector<int> arr(5);
    arr={1,2,3,4,0};
    insert(arr,1,10);
    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}