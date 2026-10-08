#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int low = 0 ;
        int high = x;
        int ans = -1;
        while(low<=high){
            long long mid = (low+high)/2;
            if(mid*mid<=x){
                ans = mid;
                low=mid+1;
            }
            else high = mid-1;
        }
        return ans;
        
    }
int main(){
    int x = 25;
    cout<<mySqrt(x);

}