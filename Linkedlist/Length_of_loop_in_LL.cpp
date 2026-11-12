// int findLengthOfLoop(ListNode *head) {                            //optimal [tortoise and hare]
        
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






// int findLengthOfLoop(ListNode *head) {                            // brute [hash map]
        
//         map<ListNode*, int> mpp;
//     ListNode* temp = head;
//     int timer=1;

//     while (temp) {
//         if (mpp.find(temp) != mpp.end()) {
//             int value=mpp[temp];
//             return timer-value;        
//         }
//         mpp[temp] = timer;
//         timer++;          
//         temp = temp->next;
//     }
//     return 0;
//     }