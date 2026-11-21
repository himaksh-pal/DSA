// int solve(vector<int>& bt) {
//         // code here
//         int n = bt.size();
//         sort(bt.begin(),bt.end());
//         int time = 0;
//         int waitTime = 0;
//         for(int i =0;i<n;i++){
//             waitTime = waitTime + time;
//             time = time+bt[i];
//         }
//         return waitTime/n;
//     }