#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int data ;
    ListNode* next;

    public:
    ListNode(int data1,ListNode* next1){
        data = data1;
        next = next1;
    }

    public:
    ListNode(int data1){
        data = data1;
        next = nullptr;
    }
};
ListNode* convertARR2LL(vector<int>&arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode*  mover = head;
    for(int i =1;i<arr.size();i++){
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
        temp=temp->next;
    }
}
// ListNode* middleNode(ListNode* head) {           // brute
//         ListNode* temp = head;
//         int cnt=0;
//         while(temp){
//             cnt++;
//             temp=temp->next;
//         }
//         temp=head;
//         cnt=(cnt/2)+1;
//         int i=0;
//         while(temp){
//                 i++;
//                 if(i==cnt) break;
//                 temp=temp->next;
//         }
//         return temp;

//     }

ListNode* middleNode(ListNode* head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    vector<int> arr ={1,1,2,1,1};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = middleNode(head);
    print(NewHead);


    return 0;
}