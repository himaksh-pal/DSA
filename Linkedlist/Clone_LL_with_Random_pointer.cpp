// Node* copyRandomList(Node* head) {                        // optimal
//         Node* temp = head;
//         while(temp){
//             Node* newNode= new Node(temp->val);
//             newNode->next=temp->next;
//             temp->next=newNode;
//             temp=temp->next->next;
//         }
//         temp=head;
//         while(temp){
//             if(temp->random==NULL) temp->next->random=temp->random;
//             else temp->next->random=temp->random->next;
//             temp=temp->next->next;
//         }
//         Node* dummyNode = new Node(-1);
//         Node* res = dummyNode;
//         temp=head;
//         while(temp){
//             res->next=temp->next;
//             res=res->next;
//             temp->next=temp->next->next;
//             temp=temp->next;
//         }
//         return dummyNode->next;
    
//     }