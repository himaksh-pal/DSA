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

ListNode* deleteHead(ListNode* head){
    if(head == NULL) return head;
    ListNode* temp = head;
    head = head->next;
    free(temp);
    return head;
}
ListNode* deleteTail(ListNode* head){
    ListNode* temp = head;
    if(head == NULL || head->next == NULL) return NULL;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=nullptr;
    free(temp->next);
    
    return head;
}
ListNode* deleteKthNode(ListNode* head, int k) {
        if(head == NULL) return head;
        if(k==1){
            ListNode* temp = head;
            head=head->next;
            free(temp);
            return head;
        }
        int cnt =0;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp != nullptr){
            cnt++;
            if(cnt == k){
                prev->next = prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }

    ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
            if(head == NULL) return head;
            if(head->data == X){
                ListNode* temp=head;
                head=head->next;
                free(temp);
                return head;
            }

            ListNode* temp = head;
            ListNode * prev = nullptr;
            while (temp)
            {
                if(temp->data == X){
                    prev->next=prev->next->next;
                    free(temp);
                    break;
                }
                prev= temp;
                temp=temp->next;
            }
            return head;
            
        }
int main(){
    vector<int> arr ={2,5,8,7};
    ListNode* head = convertARR2LL(arr);
    ListNode* NewHead = deleteNodeWithValueX(head,5);
    print(NewHead);


    return 0;
}