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
ListNode* insertAtHead(ListNode* &head, int X) {
    ListNode* temp = new ListNode(X,head);
    return temp;
}

ListNode* insertAtTail(ListNode* &head, int X) {
    if  (head == NULL) return new ListNode(X);
    ListNode* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    ListNode* N = new ListNode(X);
    temp->next = N;
    return head;
}

ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
            if(head == NULL) return new ListNode(X);
            if(K==1) return new ListNode(X,head);
            int cnt =0;
            ListNode* temp=head;
            while (temp != NULL)
            {
                cnt++;
                if(cnt==K-1){
                    ListNode* N = new ListNode(X,temp->next);
                    temp->next=N;
                    break;
                }
                temp = temp->next;
            }
            return head ;
            

        }
ListNode* insertBeforeX(ListNode* &head, int X, int val){
    if(head == NULL) return NULL;
            if(head->data==X) return new ListNode(val,head);
            ListNode* temp=head;
            while (temp->next != NULL)
            {
                if(temp->next->data==X){
                    ListNode* N = new ListNode(val,temp->next);
                    temp->next=N;
                    break;
                }
                temp = temp->next;
            }
            return head ;
}
int main(){
    vector<int> arr ={2,5,8,7};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = insertBeforeX(head,8,500);
    print(NewHead);


    return 0;
}