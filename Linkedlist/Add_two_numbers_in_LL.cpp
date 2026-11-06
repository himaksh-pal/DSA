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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode= new ListNode(-1);
        int carry = 0;
        ListNode* current = dummyNode;
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while (t1 != NULL || t2 != NULL)
        {
            int sum = carry;
            if(t1) sum = sum + t1->data;
            if(t2) sum = sum + t2->data;
            ListNode* newNode = new ListNode(sum%10);
            carry=sum/10;
            current->next=newNode;
            current=current->next;
            if(t1) t1=t1->next;
            if(t2) t2=t2->next;
        }
        if(carry !=0){
            ListNode* newNode = new ListNode(carry);
            current->next=newNode;
        }
        return dummyNode->next;
        
    }
int main(){
    vector<int> arr1={3,5};
    vector<int> arr2={4,5,9,9};
    ListNode* l1 = ConvertARRtoDLL(arr1);
    ListNode* l2 = ConvertARRtoDLL(arr2);
    ListNode* newHead = addTwoNumbers(l1,l2);
    print(newHead);
    return 0;
}