// ListNode* covertARRtoLLch(vector<int>& arr){
//         ListNode* head = new ListNode(arr[0]);
//         ListNode*temp = head;
//         int n = arr.size();
//         for(int i =1;i<n;i++){
//             ListNode* newNode = new ListNode(arr[i]);
//             temp->child=newNode;
//             temp=newNode;
//         }
//         return head;
//         }
//     ListNode* flattenLinkedList(ListNode* &head) {                                         // brute
//             ListNode* temp = head;
//             vector<int> arr;
//             while(temp){
//                 ListNode* t2 = temp;
//                 while(t2){
//                     arr.push_back(t2->val);
//                     t2=t2->child;
//                 }
//                 temp=temp->next;
//             }
        
//         if(arr.size()==0) return nullptr;
//         sort(arr.begin(),arr.end());
//         ListNode* LL = covertARRtoLLch(arr);
//         return LL;
//     }











// ListNode* MergeTwoLL(ListNode* &l1,ListNode* &l2){                                
//         ListNode* dummyNode = new ListNode(-1);
//         ListNode* res = dummyNode;
//         while(l1 && l2){
//             if(l1->val < l2->val){
//                 res->child = l1;
//                 res=l1;
//                 l1=l1->child;
//             }
//             else{
//                 res->child = l2;
//                 res=l2;
//                 l2=l2->child;
//             }
//             res->next = nullptr;
//         }
//         if(l1) res->child=l1;
//         else res->child=l2;
//         return dummyNode->child;
//         }
//     ListNode* flattenLinkedList(ListNode* &head) {                                     // optimal
//             if(head==NULL || head->next ==NULL) return head;
//             ListNode* mergedHead =flattenLinkedList(head->next);
//             return MergeTwoLL(head,mergedHead);
            
//     }