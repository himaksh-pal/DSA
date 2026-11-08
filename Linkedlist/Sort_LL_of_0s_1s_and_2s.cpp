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

// ListNode* sortList(ListNode* &head) {                          // brute
//     if(head == NULL || head->next == NULL) return head;
//             ListNode* temp = head;
//             int cnt0 = 0;
//             int cnt1 = 0;
//             int cnt2 = 0;
//             while(temp){
//                 if(temp->data == 0) cnt0++;
//                 else if(temp->data == 1) cnt1++;
//                 else if(temp->data == 2) cnt2++;

//                 temp=temp->next;
//             }

//             temp = head;
//             while(temp){
//                 if(cnt0 != 0){
//                     temp->data=0;
//                     cnt0--;
//                 }
//                 else if(cnt1 !=0){
//                     temp->data=1;
//                     cnt1--;
//                 }
//                 else if(cnt2 !=0){
//                     temp->data=2;
//                     cnt2--;
//                 }
//                 temp=temp->next;
//             }
//             return head;

//     }

ListNode* sortList(ListNode* &head) {                             // optimal
    if(head == NULL || head->next == NULL) return head;
    ListNode* temp=head;

    ListNode* zeroHead = new ListNode(-1);
    ListNode* oneHead = new ListNode(-1);
    ListNode* twoHead = new ListNode(-1);

    ListNode* zero=zeroHead;
    ListNode* one=oneHead;
    ListNode* two=twoHead;

    while(temp){
        if(temp->data == 0) {
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data == 1) {
            one->next=temp;
            one = one->next;
        }
        else if(temp->data == 2){
            two->next = temp;
            two = two->next;
        }
        temp=temp->next;
    }
    zero->next = (oneHead->next)?(oneHead->next):(twoHead->next);
    one->next = twoHead->next;
    two->next = nullptr;

    ListNode* newHead = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}
int main(){
    vector<int> arr={1, 0, 2, 0, 1};
    ListNode* head = ConvertARRtoLL(arr);
    ListNode* newhead = sortList(head);
    print(newhead);
    return 0;
}