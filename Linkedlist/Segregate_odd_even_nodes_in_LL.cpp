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

ListNode* oddEvenList(ListNode* head) {
        
    }
int main(){
    vector<int> arr={1,2};
    ListNode* head = ConvertARRtoDLL(arr);
    ListNode* newhead = oddEvenList(head);
    print(newhead);
    return 0;
}