
// vector<vector<int>> merge(vector<vector<int>>& arr) {
//         int n = arr.size();
//         if(n==0) return arr;
//         sort(arr.begin(),arr.end());

//         vector<vector<int>> ans;
//         vector<int> p = arr[0];
//         for(int i = 1 ; i<n ;i++){
//             if( p[1] >=arr[i][0] ){
//                 // p[0] = min(p[0],arr[i][0]);
//                 p[1] = max(p[1],arr[i][1]);
//             }
//             else{
//                 ans.push_back(p);
//                 p = arr[i];
//             }
//         }
//         ans.push_back(p);
//         return ans;
//     }