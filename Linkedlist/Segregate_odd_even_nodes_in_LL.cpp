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

// ListNode* oddEvenList(ListNode* head) {                             // brute
//         vector<int> arr;

//         if(head == NULL || head->next == NULL) return head;

//         ListNode* temp = head;
//         while(temp && temp->next){
//             arr.push_back(temp->data);
//             temp=temp->next->next;
//         }
//         if(temp) arr.push_back(temp->data);

//         temp=head->next;
//         while(temp && temp->next){
//             arr.push_back(temp->data);
//             temp=temp->next->next;
//         }
//         if(temp) arr.push_back(temp->data);

//         temp = head;
//         int i =0;
//         while(temp){
//             temp->data=arr[i];
//             i++;
//             temp=temp->next;
//         }
//         return head;
//     }

ListNode* oddEvenList(ListNode* head) {                            //optimal
        if(head == NULL || head->next == NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;
        while(even && even->next){
            odd->next=odd->next->next;
            odd=odd->next;

            even->next=even->next->next;
            even=even->next;

        }
        odd->next=evenHead;
        return head;
    }
int main(){
    vector<int> arr={1,2,3,4};
    ListNode* head = ConvertARRtoDLL(arr);
    ListNode* newhead = oddEvenList(head);
    print(newhead);
    return 0;
}