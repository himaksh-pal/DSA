// static bool comp(pair<int , int> p1 ,pair<int , int> p2){
//         if(p1.second<p2.second) return true;
//         return false;
//     }
//     int maxMeetings(vector<int>& start, vector<int>& end){
//         int n = end.size();
//         vector<pair<int,int>> a(n);
//         for(int i = 0 ; i<n;i++){
//             a[i].first = start[i];
//             a[i].second = end[i];
//         }
//         sort(a.begin(),a.end(),comp);
//         int cnt = 1;
//         int freeTime = a[0].second;

//         for(int i = 1 ; i<n;i++){
//             if(a[i].first>freeTime){
//                 cnt++;
//                 freeTime=a[i].second;
//             }
//         }
//         return cnt;
//     }