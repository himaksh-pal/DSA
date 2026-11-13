// ListNode* getTail(ListNode* temp,int a){
//         int cnt =0;
//         while(temp){
//             cnt++;
//             if(cnt==a){
//                 return temp;
//             }
//             temp=temp->next;
//         }
//         return nullptr;
//     }
//     ListNode* reverseList(ListNode* head){
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newHead=reverseList(head->next);
//         ListNode* front = head->next;
//         front->next=head;
//         head->next=nullptr;
//         return newHead;
//     }
//     ListNode* rotateRight(ListNode* head, int k) {                                // my 
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* temp = head;
//         ListNode* nextNode;
//         ListNode* prevNode;
//         int len =0;
//         while(temp){
//             len++;
//             temp=temp->next;
//         }
//         k=k%len;
//         temp=head;
//         ListNode* tail= getTail(temp,len-k);
//         nextNode=tail->next;
//         tail->next=nullptr;
//         ListNode* newHead=reverseList(temp);
//         head=tail;
//         prevNode=temp;
//         if(k==1){
//             prevNode->next=nextNode;
//             ListNode* res  = reverseList(head);
//             return res;
//         }
//         temp=nextNode;
//         tail= getTail(temp,k);
//         newHead=reverseList(temp);
//         prevNode->next=tail;
//         ListNode* res = reverseList(head);
//         return res;


//         }





// ListNode* getnewLastNode(ListNode* head,int a){                                 //optimal
//         ListNode* temp=head;
//         int cnt=0;
//         while(temp){
//             cnt++;
//             if(cnt==a){
//                 break;
//             }
//             temp=temp->next;
//         }
//         return temp;
//     }
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL || k==0 ) return head;
//         ListNode* tail = head;
//         int len =1;
//         while(tail->next){
//             len++;
//             tail=tail->next;
//         }

//         if(k%len==0) return head;
//         k=k%len;

//         tail->next=head;
        
//         ListNode* newLastNode = getnewLastNode(head,len-k);
//         head=newLastNode->next;
//         newLastNode->next = nullptr;
//         return head;

//         }