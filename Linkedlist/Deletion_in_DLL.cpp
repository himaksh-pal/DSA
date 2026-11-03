#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int data;
    ListNode* next ;
    ListNode* prev;

    public:
    ListNode(int data1,ListNode* next1,ListNode* prev1){
        data = data1;
        next=next1;
        prev = prev1;
    }

    public:
    ListNode(int data1){
        data = data1;
        next = nullptr;
        prev=nullptr;
    }
};
ListNode* ConvertARRtoDLL(vector<int>& arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover= head;
    for(int i = 1;i<arr.size();i++){
        ListNode* temp = new ListNode(arr[i],nullptr,mover);
        mover->next= temp;
        mover= mover->next;
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

ListNode *deleteHead(ListNode *head) {
    if(head == NULL) return head;
    if(head->next==NULL && head->prev==NULL) return NULL;
        ListNode* temp = head;
        head= head->next;
        head->prev=nullptr;
        temp->next=nullptr;
        free(temp);
        return head;
    }
    
ListNode *deleteTail(ListNode *head) {
        // Your code goes here
        if(head == NULL) return head;
    if(head->next==NULL && head->prev==NULL) return NULL;
    ListNode* temp =head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    temp->prev=nullptr;
    free(temp);
    return head;

    }
int main(){
    vector<int> arr={1,2,3,4};
    ListNode* head = ConvertARRtoDLL(arr);
    ListNode* newhead = deleteTail(head);
    print(newhead);
    return 0;
}