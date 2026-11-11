#include <bits/stdc++.h>
using namespace std;
struct ListNode{
    public:
    int val ;
    ListNode* next;

    public:
    ListNode(int val1,ListNode* next1){
        val = val1;
        next = next1;
    }

    public:
    ListNode(int val1){
        val = val1;
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
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next == NULL) return head;
        ListNode* newHead= reverseList(head->next);
        ListNode* front = head->next;
        front->next =head;
        head->next= nullptr;
        return newHead;
    }
// bool isPalindrome(ListNode* head) {                               // brute [ stack based solution ]
//         ListNode* temp = head;
//         stack<int> st;
//         while(temp){
//             st.push(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         while(temp){
//             if(st.top() != temp->val) return false;
//             st.pop();
//             temp=temp->next;
//         }
//         return true;
        
// }


    bool isPalindrome(ListNode* head) {                               // optimal
        if(head==NULL || head->next == NULL) return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverseList(slow->next);
        ListNode* first= head;
        while(newHead){
            if(first->val != newHead->val) return false;
            first=first->next;
            newHead=newHead->next;
        }
        
        return true;



    }
    


int main(){
    vector<int> arr ={1,2,2,1};
    ListNode* head = convertARR2LL(arr);
    bool check = isPalindrome(head);
    cout<<check;


    return 0;
}