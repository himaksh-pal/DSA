#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbersMB(vector<int> arr) { //brute MY
        int n =arr.size();
        
        
        vector<int> ans;
        for(int i =0 ; i<n;i++){
            int cnt=0;
            for(int j =0;j<n;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            if(cnt==2){
                ans.push_back(arr[i]);
                break;
            }
             
        }
        for(int i =1;i<=n;i++){
            int temp =0;
            for(int j =0;j<n;j++){
                if(i==arr[j]){
                    temp =1;
                    break;
                }
            }
            if(temp==0){ 
                ans.push_back(i);
                break;
            }
        }
        return ans;

    }

vector<int> findMissingRepeatingNumbersM(vector<int> arr) {  // better MY
        int n =arr.size();
        
        
        vector<int> ans;
        vector<int> temp(n+1);
        temp={0};
        for(int i =0;i<n;i++){
            temp[arr[i]]++;
        }
        for(int i =1;i<=n;i++){
            if(temp[i]==2){
                ans.push_back(i);
            }


        }
        for(int i =1;i<=n;i++){
            if(temp[i]==0){
                ans.push_back(i);
            }

        }
        return ans;

    }

vector<int> findMissingRepeatingNumbersO1(vector<int> arr) { 
    long long n = arr.size();
    long long SN= (n*(n+1))/2;
    long long S2N= (n*(n+1)*(2*n+1))/6;
    long long S=0;
    long long S2=0;
    for(int i=0;i<n;i++){
        S+=arr[i];
        S2+=(long long )arr[i]*(long long)arr[i];          
    }
    long long val1=SN-S;// x-y
    long long val2=S2N-S2;
    val2=val2/val1;//x+y
    long long x = (val1+val2)/2;
    long long y = x- val1;

    return {(int)y,(int)x};


}
int main(){
    vector<int> arr ={3, 5, 4, 1, 1};
    vector<int> res = findMissingRepeatingNumbersO1(arr);
    for(auto it : res ){
        cout<<it<<" ";
    }
    return 0;
}