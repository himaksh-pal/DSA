#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& arr) {
        int n = arr.size();
        long long maxi =INT_MIN;
        for(int i = 0;i<n;i++){
            long long product=1;
            for(int j =i;j<n;j++){
                product=product*arr[j];
                maxi= max(product,maxi);

            }
        }
        return (int)maxi;
    }
int main(){
    vector<int> arr ={1,0,-5,2,3,-8,-9 };
    int res = maxProduct(arr);
    cout<<"max product : "<<res;
    return 0;
}