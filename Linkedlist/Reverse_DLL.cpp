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

// ListNode* reverseDLL(ListNode* head) {    // extreme solution
//         ListNode* temp =head;
//         stack<int> st;
//         while (temp)
//         {
//             st.push(temp->data);
//             temp = temp->next;
//         }
//         temp= head;
//         while (temp)
//         {
//             temp->data=st.top();
//             st.pop();
//             temp=temp->next;
//         }
//         return head;
                
//     }

ListNode* reverseDLL(ListNode* head){                                                 // swapping (optimal)
    if(head == NULL || head->next == NULL) return head;
    if (head == NULL || head->next == NULL) return head;

        ListNode* current = head;
        ListNode* newHead = nullptr;

        while (current != NULL) {
            // swap prev and next
            ListNode* temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            newHead = current;          // remember the last processed node
            current = current->prev;    // prev now holds the old next
        }
        return newHead;
}
int main(){
    vector<int> arr={1,2,6};
    ListNode* head = ConvertARRtoDLL(arr);
    ListNode* newHead = reverseDLL(head);
    print(newHead);
    return 0;
}