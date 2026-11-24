// static bool comp ( pair<int , int > p1 , pair<int , int > p2){
//         if ( p1.first< p2.first) return true;
//         if ( p1.first > p2.first) return false;
//         // same 
//         if(p1.second > p2.second) return true;
//         return false;
//        }
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {           // my solution {but it is wrong }
//         // code here
//         int n = deadline.size(); 
//         vector <pair<int , int>> a(n);
//         for(int i = 0 ; i < n ; i++){
//             a[i].first = deadline[i];
//             a[i].second = profit[i];
//         }
//         sort(a.begin(),a.end(),comp);

//         int totalProfit = a[0].second;
//         int day =a[0].first;
//         int cntJobs=1;
//         for(int i =1 ;i<n ;i++){ 
//             if(day == a[i].first) continue;
//             day = a[i].first;
//             totalProfit += a[i].second;
//             cntJobs++;
//         }

//         return {cntJobs,totalProfit};
//     }






















//     static bool comp(pair<int,int> p1, pair<int,int> p2){
//       return p1.second > p2.second;
//   }
    
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {       // optimal sir
//         // code here
//         int n = deadline.size(); 
//         vector <pair<int , int>> a(n);
//         for(int i = 0 ; i < n ; i++){
//             a[i].first = deadline[i];
//             a[i].second = profit[i];
//         }
//         sort(a.begin(),a.end(),comp);
        
//         int totProfit = 0;
//         int cnt =0;
//         int maxDeadline = -1;
        
//         for(int  i = 0 ;i<n ;i++) maxDeadline = max ( maxDeadline, a[i].first);
        
//         vector<int> hash(maxDeadline + 1, -1);
        
//         for(int i =0 ; i<n ; i++){
//             for(int j = a[i].first ; j>0;j--){
//                 if(hash[j]==-1){
//                     cnt++;
//                     hash[j]=1;
//                     totProfit+= a[i].second;
//                     break;
//                 }
//             }
//         }
//         return {cnt,totProfit};

//     }