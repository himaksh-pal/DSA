// bool canJump(vector<int>& arr) {
//         int n = arr.size();
//         int maxInd = 0;
//         for(int i = 0; i<n ; i++){
//             if(i>maxInd) return false;
//             maxInd = max(i+arr[i],maxInd);
//         }
//         return true;
//     }