// ListNode* convertARRtoLL(vector<int>& arr){
//         ListNode* head = new ListNode(arr[0]);
//         ListNode*temp = head;
//         int n = arr.size();
//         for(int i =1;i<n;i++){
//             ListNode* newNode = new ListNode(arr[i]);
//             temp->next=newNode;
//             temp=newNode;
//         }
//         return head;
//     }
//     ListNode* sortList(ListNode* head) {                                            // brute
//         if(head==NULL || head->next == NULL) return head;
//         ListNode* temp = head;
//         vector<int> arr;
//         while(temp){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }
//         sort(arr.begin(),arr.end());
//         return convertARRtoLL(arr);

//     }













//  ListNode* findMiddle(ListNode* head){
//         ListNode* slow=head;
//         ListNode* fast=head->next;  // to get first middle in case of even lenght LL
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
//     ListNode* mergeTwoLists(ListNode* l1,ListNode* l2){
//         ListNode* dummyNode= new ListNode(-1);
//         ListNode* temp = dummyNode;
//         while(l1 && l2){
//             if(l1->val < l2->val){
//                 temp->next=l1;
//                 temp=l1;
//                 l1=l1->next;
//             }
//             else{
//                 temp->next=l2;
//                 temp=l2;
//                 l2=l2->next;
//             }
//         }
//         if(l1) temp->next = l1;
//         else temp->next = l2;

//         return dummyNode->next;
//     }
//     ListNode* sortList(ListNode* head) {                                      //optimal
//         if(head==NULL || head->next == NULL) return head;
//         ListNode* middle = findMiddle(head);
//         ListNode* leftHead = head;
//         ListNode* rightHead = middle->next;
//         middle->next = nullptr;

//         leftHead = sortList(leftHead);
//         rightHead = sortList(rightHead);

//         return mergeTwoLists(leftHead,rightHead);
//     }