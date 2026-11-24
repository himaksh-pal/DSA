// static bool comp(pair<long long,long long> p1 , pair<long long , long long> p2){
//     if(((double)p1.first/p1.second) > ((double)p2.first/p2.second)) return true;
//     return false;
// }
//     double fractionalKnapsack(vector<long long>& val, vector<long long>& wt, long long capacity) {
//         int n = val.size();
//         vector<pair<long long, long long>> a(n);
//         for (int i = 0; i < n; i++) {
//             a[i].first = val[i];
//             a[i].second = wt[i];
//         }
//         sort(a.begin(),a.end(),comp);
//         double totalVal=0;
//         for(int i = 0 ; i < n ; i ++){
//             if(a[i].second <= capacity){
//                 totalVal += a[i].first;
//                 capacity -=a[i].second;
//             }
//             else{
//                 totalVal += ((double)(a[i].first)/(a[i].second))*capacity;
//                 break;
//             }
//         }
//         return totalVal;

//     }