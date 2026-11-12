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
// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {                     // brute [hash map]
//         ListNode* temp=headA;
//         map<ListNode*,int> mpp;
//         while(temp){
//             mpp[temp]=1;
//             temp=temp->next;

//         }
//         temp=headB;
//         while(temp){
//             if(mpp.find(temp)!=mpp.end()) return temp;
//             temp=temp->next;
//         }
//         return NULL;
//     }


// ListNode* collisionPoint(ListNode* headA , ListNode* headB, int d){                        // Better [length based approach]
//         while(d!=0){
//             d--;
//             headB=headB->next;
//         }
//         while(headA!=headB){
//             headA=headA->next;
//             headB=headB->next;
//         }
//         return headA;
//     }
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* temp=headA;
//         int l1=0;
//         while(temp){
//             l1++;
//             temp=temp->next;
//         }
//         temp=headB;
//         int l2=0;
//         while(temp){
//             l2++;
//             temp=temp->next;
//         }
    

//         if(l1<l2)  return collisionPoint(headA,headB,l2-l1);
//         return collisionPoint(headB,headA,l1-l2);
//     }


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {                  // optimal [pointer approach]
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
            if(t1==t2) return t1;
            if(t1==NULL) t1=headB;
            if(t2==NULL) t2=headA;
        }
        return t1;
    }
int main(){
    // vector<int> arr ={1,2,2,1};
    // ListNode* head = convertARR2LL(arr);
    // bool check = isPalindrome(head);
    // cout<<check;


    return 0;
}