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
ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* newHead = new ListNode(X,head,nullptr);
        head->prev= newHead;
        return newHead;
    }
    ListNode* insertBeforeTail(ListNode* head, int X) {
        ListNode* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        ListNode* back = temp->prev;
        ListNode* newNode = new ListNode(X,temp,back);
        if(back==NULL){
            temp->prev=newNode;
            return newNode;
        }
        back->next=newNode;
        temp->prev=newNode;
        return head;
        
    }

ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        if(K==1){
            ListNode* newHead = new ListNode(X,head,nullptr);
            head->prev= newHead;
            return newHead;
        }
        ListNode* temp = head;
        int cnt=0;
        while (temp != NULL)
        {
            cnt++;
            if(cnt==K) break;
            temp = temp->next;
        }
        ListNode* back = temp->prev;
        ListNode* newNode = new ListNode(X,temp,back);
        back->next=newNode;
        temp->prev=newNode;
        return head;

    }

void insertBeforeGivenNode(ListNode* node, int X) {
        ListNode* back = node->prev;
        ListNode* newNode = new ListNode(X,node,back);
        back->next=newNode;
        node->prev=newNode;

    }
int main(){
    vector<int> arr={1,2,6};
    ListNode* head = ConvertARRtoDLL(arr);
    insertBeforeGivenNode(head->next->next,100);
    print(head);
    return 0;
}