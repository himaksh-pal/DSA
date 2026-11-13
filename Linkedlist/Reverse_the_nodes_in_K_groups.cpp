// ListNode* reverseList(ListNode* head){
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead=reverseList(head->next);
//         ListNode* front=head->next;
//         front->next=head;
//         head->next=nullptr;
//         return newHead;
//     }
//     ListNode* getKthNode(ListNode* temp,int k){
//         int cnt =0;
//         while(temp){
//             cnt++;
//             if(cnt==k){
//                 return temp;
//             }
//             temp=temp->next;
//         }
//         return nullptr;
//     }
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         ListNode* temp = head;
//         ListNode* nextNode;
//         ListNode* prevNode;
//         while(temp){
//             ListNode* KthNode= getKthNode(temp,k);
//             if(KthNode==nullptr){
//                 if(prevNode) prevNode->next=temp;
//                 break;
//             }
//             nextNode=KthNode->next;
//             KthNode->next=nullptr;
//             ListNode* newHead= reverseList(temp);
//             if(temp==head){
//                 head=KthNode;            // only for the first reversal to place the head in the front
//             }
//             else{
//                 prevNode->next=KthNode;
//             }
//             prevNode=temp;
//             temp=nextNode;

//             }
        
//         return head;
//     }