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
ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next ==NULL) return nullptr;
        ListNode* prev = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        slow->next=nullptr;
        delete slow;
        return head;
    }
int main(){
    vector<int> arr ={1,1,2,1,1};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = deleteMiddle(head);
    print(NewHead);


    return 0;
}