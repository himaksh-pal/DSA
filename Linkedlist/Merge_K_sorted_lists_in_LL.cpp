// ListNode* covertARRtoLL(vector<int>& arr){
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
//     ListNode* mergeKLists(vector<ListNode*>& lists) {                  // brute
//         int n = lists.size();
//         if(n==0) return nullptr;
//         vector<int>arr;
//         for(int i =0;i<n;i++){
//             ListNode* temp = lists[i];
//             while(temp){
//                 arr.push_back(temp->val);
//                 temp=temp->next;
//             }
//         }
//         if(arr.size()==0) return nullptr;
//         sort(arr.begin(),arr.end());
//         ListNode* LL = covertARRtoLL(arr);
//         return LL;
//     }