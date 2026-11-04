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

ListNode *deleteKthElement(ListNode *&head, int k) {
        ListNode* temp = head;
        int cnt  = 0;
        while (temp)
        {
            cnt++;
            if(cnt==k) break;
            temp=temp->next;

        }
        ListNode* back = temp->prev;
        ListNode* front = temp->next;

        if(front==NULL && back==NULL){
            free(temp);
            return NULL;
        }
        else if(back==NULL){
            ListNode* n = head;
            head=head->next;
            head->prev=nullptr;
            n->next=nullptr;
            free(n);
            return head;
        }
        else if(front==NULL){
            ListNode* n = head;
            while(n->next != NULL){
                n=n->next;
            }
            n->prev->next=nullptr;
            n->prev=nullptr;
            free(n);
            return head;
        }

        back->next=front;
        front->prev=back;
        temp->next=nullptr;
        temp->prev= nullptr;
        free(temp);
        return head;
        
    }

void deleteGivenNode(ListNode *node) {
        ListNode* temp= node;
        ListNode* back = temp->prev;
        ListNode* front = temp->next;
        if(front==nullptr){ 
            back->next=nullptr;
            temp->prev=nullptr;
            free(temp);
        
            
        }
        else{
            back->next=front;
            front->prev=back;
            temp->next=nullptr;
            temp->prev= nullptr;
            free(temp);
        }
        
    }
int main(){
    vector<int> arr={1,2};
    ListNode* head = ConvertARRtoDLL(arr);
    ListNode* newhead = deleteKthElement(head,2);
    print(newhead);
    return 0;
}