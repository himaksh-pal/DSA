// static bool comp(vector<int> v1, vector<int> v2){
//         if(v1[1]<v2[1]) return true;
//         if(v1[1]>v2[1]) return false;
//         // same
//         if(v1[0]<v2[0]) return true;
//         return false;
//     }
//     int eraseOverlapIntervals(vector<vector<int>>& arr) {          // my and optimal
//         int n = arr.size();
//         sort(arr.begin(),arr.end(),comp);
//         int startTime = arr[0][1];
//         int cnt= 0;
//         for(int i = 1 ; i < n ; i++ ){
//             if(startTime > arr[i][0]){
//                 cnt++;
//                 continue;
//             }
//             startTime = arr[i][1];
//         }
//         return cnt;
//     }