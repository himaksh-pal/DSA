#include <bits/stdc++.h>
using namespace std;
// long double minimiseMaxDistance(vector<int> &arr, int k) {         // brute sir
//        int n = arr.size();
//        vector<int> howMany(n-1,0);
//        for(int gasStation = 1; gasStation <= k; gasStation ++){
//         long double maxSection = -1;
//         int maxInd = -1;
//         for(int i = 0 ;i<n-1;i++){
//             long double diff = (arr[i+1]-arr[i]);
//             long double sectionLen = diff/(long double)(howMany[i]+1);
//             if(sectionLen > maxSection){
//                 maxSection = sectionLen;
//                 maxInd=i; 
//             }
//         }
//         howMany[maxInd]++;   
//        }
       
       
//        long double maxAns = -1;
//        for(int i =0;i<n-1;i++){
//         long double diff = (arr[i+1]-arr[i]);
//         long double sectionLen = diff/(long double)(howMany[i]+1);
//         maxAns = max(maxAns,sectionLen);
//        }
//        return maxAns;
//     }

// long double minimiseMaxDistance(vector<int> &arr, int k){     // better (priority queue approach ) sir 
//     int n = arr.size();
//     vector<int> howMany(n-1,0);
//     priority_queue <pair<long double,int>> pq;
//     for(int i = 0 ; i < n-1;i++){
//         pq.push({arr[i+1]-arr[i],i});
//     }

//     for(int gasStation =1;gasStation<=k;gasStation++){
//         auto tp = pq.top();
//         pq.pop();
//         int secInd=tp.second;
//         howMany[secInd]++;
//         long double itiDiff= arr[secInd+1]-arr[secInd];
//         long double NewSecLen = itiDiff/(long double)(howMany[secInd]+1);
//         pq.push({NewSecLen,secInd});
//     }
//     return pq.top().first;
// }


int numberOfGasStationRequired(long double dist , vector<int> &arr){          // optimal (binary search ) sir 
    int cnt =0;
    for(int i = 1; i<arr.size();i++){
        int numberInBetween=((arr[i]-arr[i-1])/dist);
        if((arr[i]-arr[i-1])/dist == numberInBetween*dist) numberInBetween--;
        cnt+=numberInBetween;
    }
    return cnt;
}
long double minimiseMaxDistance(vector<int> &arr, int k){
    int n = arr.size();
    long double low = 0;
    long double high =0;
    for(int i=0;i<n-1;i++){
        high = max(high, (long double)(arr[i+1]-arr[i]));
    }

    long double diff = 1e-6;

    while((high-low)>diff){
        long double mid = (low + high )/(2.0);
        int cnt = numberOfGasStationRequired(mid,arr);
        if(cnt>k) low = mid;
        else high = mid;
    }
    return high;
    
}
int main(){
    int k = 5 ;
    vector<int> arr = {1,13,17,23};
    cout<<minimiseMaxDistance(arr,k);
    return 0;
}   