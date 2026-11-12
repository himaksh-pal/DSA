//  ListNode *detectCycle(ListNode *head) {                                  // brute [hash map]
//     map<ListNode*, int> mpp;
//     ListNode* temp = head;

//     while (temp) {
//         if (mpp.find(temp) != mpp.end()) {
//             return temp;        
//         }
//         mpp[temp] = 1;          
//         temp = temp->next;
//     }
//     return nullptr;
//     }


// ListNode *detectCycle(ListNode *head) {                             // optimal [ tortoise and hare ]
//         if(head == NULL ||head->next ==NULL) return nullptr;
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 slow=head;
//                 while(slow!=fast){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return slow;
//             }
//         }
//         return nullptr;
        
//     }