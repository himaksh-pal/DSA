// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {               // optimal 
//         if(list1==NULL && list2==NULL) return nullptr;
//         ListNode* t1 =list1;
//         ListNode* t2 =list2;
//         ListNode* dummyNode = new ListNode(-1);
//         ListNode* temp= dummyNode;
//         while(t1 && t2){
//             if(t1->val >= t2->val){
//                 temp->next=t2;
//                 temp=t2;
//                 t2=t2->next;
//             }
//             else{
//                 temp->next=t1;
//                 temp=t1;
//                 t1=t1->next;
//             }
//         }
//         if(t1) temp->next = t1;
//         else temp->next = t2;
//         return dummyNode->next;
//     }