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

ListNode* reverseList(ListNode* head) {                          // optimal [itertive solution]
    if(head == NULL || head->next ==NULL) return head;
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp){
        ListNode* front = temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

// ListNode* reverseList(ListNode* head) {                             // optimal [recursive solution]
//     if(head == NULL || head->next == NULL) return head;
//     ListNode* newHead = reverseList(head->next);

//     ListNode* front = head->next;
//     front->next=head;
//     head->next=nullptr;
//     return newHead;

// }
int main(){
    vector<int> arr ={1,1,2,1};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = reverseList(head);
    print(NewHead);


    return 0;
}