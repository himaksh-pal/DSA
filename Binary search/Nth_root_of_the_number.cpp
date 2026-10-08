#include<bits/stdc++.h>
using namespace std;
int NthRoot(int N, int M) {
       int low = 0 , high = M;
       while(low<=high){
        int mid = (low + high )/2;
        if(pow(mid,N)==M) return mid;
        if(pow(mid,N)<M) low = mid+1;
        else high = mid - 1;
       } 
       return -1;
    }
int main(){
    int n = 2;
    int m = 64;
    cout<<NthRoot(n,m);
    return 0;
}