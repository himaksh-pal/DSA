// vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {                     // brute
//         vector<vector<int>> arr;
//         ListNode* temp1 = head;
//         while(temp1){
//             ListNode* temp2 = temp1->next;
//             while(temp2 && temp1->val+temp2->val <= target){
//                 if(temp1->val+temp2->val == target){
//                     arr.push_back({temp1->val,temp2->val});
//                 }
//                 temp2=temp2->next;
//             }
//             temp1=temp1->next;
//         }
//         return arr;
//     }










// ListNode* tail(ListNode* head){
//         ListNode* tail = head;
//         while(tail->next) tail=tail->next;
//         return tail;
//     }
//     vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {             // optimal
//         vector<vector<int>> arr;
//         if(head==NULL) return arr;
//         ListNode* left = head;
//         ListNode* right = tail(head);
//         while(left->val < right->val){
//             int sum = left->val+right->val;
//             if(sum==target){
//                 arr.push_back({left->val,right->val});
//                 left=left->next;
//                 right=right->prev;
//             }
//             else if(sum < target) left=left->next;
//             else right=right->prev;
//         }
//         return arr;
        
//     }