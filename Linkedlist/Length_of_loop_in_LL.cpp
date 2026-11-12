// int findLengthOfLoop(ListNode *head) {
        
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 slow=slow->next;
//                 int cnt=1;
//                 while(slow!=fast){
//                     slow=slow->next;
//                     cnt++;
//                 }
//                 return cnt;
//             }
//         }
//         return 0;
//     }