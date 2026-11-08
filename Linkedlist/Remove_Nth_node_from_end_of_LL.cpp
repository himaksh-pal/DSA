#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int data;
    ListNode* next ;

    public:
    ListNode(int data1,ListNode* next1){
        data = data1;
        next=next1;
    }

    public:
    ListNode(int data1){
        data = data1;
        next = nullptr;
    }
};
ListNode* ConvertARRtoLL(vector<int>& arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover= head;
    for(int i = 1;i<arr.size();i++){
         ListNode* temp = new ListNode(arr[i]);
        mover->next=temp;
        mover = temp ;
    }
    return head;
}

void print(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;

    }

}

// ListNode* removeNthFromEnd(ListNode* head, int n) {                    // my
//         if(head==NULL) return head;
//         ListNode* temp=head;
//         int cnt=0;
//         while(temp){
//             cnt++;
//             temp=temp->next;
//         }
//         int N = (cnt-n+1);
//         if(N==1){
//             temp=head;
//             head=head->next;
//             temp->next=nullptr;
//             delete temp;
//             return head;
//         }
//         temp=head;
//         ListNode* prev=nullptr;
//         cnt=0;
//         while(temp){
//             cnt++;
//             if(cnt==N){
//                 break;
//             }
//             prev=temp;
//             temp=temp->next;

//         }
//         prev->next=temp->next;
//         temp->next=nullptr;
//         delete temp;
//         return head;
//     }

ListNode* removeNthFromEnd(ListNode* head, int n) {             // optimal
        if(head==NULL ) return NULL;
        ListNode* fast=head;
        for(int i =0;i<n;i++){
            fast=fast->next;
        }
        if(fast == NULL) return head->next;
        ListNode* slow=head;
        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        return head;
        
    }
int main(){
    vector<int> arr={1, 0, 2, 0, 1};
    ListNode* head = ConvertARRtoLL(arr);
    ListNode* newhead = removeNthFromEnd(head,1);
    print(newhead);
    return 0;
}