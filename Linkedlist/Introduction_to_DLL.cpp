#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int data ;
    ListNode* next;
    ListNode* back;

    public:
    ListNode(int data1,ListNode* next1,ListNode* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    ListNode(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
ListNode* CnvertARRtoDLL(vector<int> & arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;
    for(int i =1 ; i<arr.size();i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next=temp;
        temp->back=mover;
        mover=mover->next;
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
int main(){
    vector<int> arr ={1,2,3,4};
    ListNode* y = CnvertARRtoDLL(arr);
    print(y);  
    return 0;
}