//  bool hasCycle(ListNode *head) {                                  // brute [hash map]
//     map<ListNode*, int> mpp;
//     ListNode* temp = head;

//     while (temp) {
//         if (mpp.find(temp) != mpp.end()) {
//             return true;        
//         }
//         mpp[temp] = 1;          
//         temp = temp->next;
//     }
//     return false;
//     }








//     bool hasCycle(ListNode *head) {                                  //optimal [ tortoise and hare algo ]
//         if (head == nullptr || head->next==NULL)
//             return false;
//     ListNode* slow = head;
//     ListNode* fast = head;
//     while(fast && fast->next){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast) return true;
//     }
//     return false;

    
//     }