// vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans ;
//         int len = nums.size();
//         int subsets = 1<<len;
//         for(int n =0 ;n <=subsets-1 ; n++){
//             vector<int> lists;
//             for(int i =0;i<len;i++){
//                 if((n & (1<<i)) != 0) lists.push_back(nums[i]);
//             }
//             ans.push_back(lists);
//         }
//         return ans;
//     }  