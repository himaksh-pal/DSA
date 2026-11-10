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
ListNode* reverseList(ListNode* head){
        if(head== NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next=head;
        head->next = nullptr;
        return newHead;
        
    }
ListNode* addOne(ListNode* head) {
        ListNode* one = new ListNode(1);
        ListNode* rev = reverseList(head);
        ListNode* dummyNode = new ListNode(-1);
        ListNode* t1=one;
        ListNode* t2=rev;
        ListNode* mover = dummyNode;
        int carry=0;
        while(t1 || t2){
            int sum=carry;
            if(t1) sum=sum+t1->data;
            if(t2) sum=sum+t2->data;
            
            ListNode* temp = new ListNode(sum%10);
            carry=sum/10;
            mover->next=temp;
            mover=temp;
            
            
            if(t1) t1=t1->next;
            if(t2) t2=t2->next;
            
            
        }
        if(carry!=0){
               ListNode* temp = new ListNode(carry);
               mover->next = temp;
               
        }
        return reverseList(dummyNode->next);
        
    }
int main(){
    vector<int> arr ={1,1,2,1};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = addOne(head);
    print(NewHead);


    return 0;
}