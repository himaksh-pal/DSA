// ListNode * removeDuplicates(ListNode *head) {
//         ListNode* temp=head->next;
//         int check=head->val;
//         while(temp){
//             if(check==temp->val){
//                 ListNode* prevNode=temp->prev;
//                 temp=temp->next;
//                 prevNode->next=temp;
//                 if(temp)temp->prev=prevNode;;
//             }
//             else{
//                 check=temp->val;
//                 temp=temp->next;
//             }

//         }
//         return head;
//     }