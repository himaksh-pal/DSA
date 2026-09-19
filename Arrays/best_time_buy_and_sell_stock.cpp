using namespace std;
#include<bits/stdc++.h>
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int mini = prices[0];
    int maxProfit=0;
    for(int i=0 ; i<n ; i++){
        int cost = prices[i]-mini;
        maxProfit = max(cost,maxProfit);
        mini = min(mini,prices[i]);
        }
        return maxProfit;
        
    }
int main(){
    vector<int> nums(5);
    nums={7,1,3,6,4};
    int result = maxProfit(nums);
    cout<<" RESULT :"<<result;

    return 0;
}