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

ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
int main(){
    vector<int> arr={1, 0, 2, 0, 1};
    ListNode* head = ConvertARRtoLL(arr);
    ListNode* newhead = removeNthFromEnd(head,3);
    print(newhead);
    return 0;
}