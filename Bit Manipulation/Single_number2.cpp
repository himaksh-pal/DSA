// int singleNumber(vector<int>& nums) {                                                  // brute [Bitwise Approach] 
//         int result = 0;
        
//         // Iterate through all 32 bits of an integer
//         for (int i = 0; i < 32; i++) {
//             int sum = 0;
            
//             // Count how many numbers have the i-th bit set
//             for (int num : nums) {
//                 if ((num >> i) & 1) {
//                     sum++;
//                 }
//             }
            
//             // If the sum is not a multiple of 3, the unique number has this bit set
//             if (sum % 3 != 0) {
//                 result = result | (1 << i);
//             }
//         }
        
//         return result;
//     }










// int singleNumber(vector<int>& nums) {                                                      // better [ sorting approach ]
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i =1 ;i<n;i=i+3){
//             if(nums[i]!=nums[i-1]) return nums[i-1];
//         }
//         return nums[n-1];
//     }











// int singleNumber(vector<int>& nums) {                                                         // optimal [concept of buckets]
//         int n = nums.size();
//         int ones = 0;
//         int twos = 0;
//         for(int i = 0 ; i<n ; i++){
//             ones = (ones ^ nums[i]) & ~twos;
//             twos = (twos ^ nums[i]) & ~ones;
//         }
//         return ones;
//     }