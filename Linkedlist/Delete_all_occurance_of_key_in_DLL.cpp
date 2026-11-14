// ListNode * deleteAllOccurrences(ListNode* head, int target) {
//         ListNode* temp=head;
//         ListNode* nextNode;
//         ListNode* prevNode;
//         while(temp){
//             nextNode=temp->next;  
//             prevNode=temp->prev;
//             if(target==temp->val){
//                 if(prevNode==NULL && nextNode==NULL) return nullptr;
//                 if(prevNode==NULL){
//                     head=nextNode;
//                     head->prev=prevNode;
//                 }
//                 else{
//                     prevNode->next=nextNode;
//                     if(nextNode) nextNode->prev=prevNode;
//                 }
//                 delete temp;
//             }
//             temp=nextNode;
//         }
        
//         return head;
//     }