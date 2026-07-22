#include <iostream>
using namespace std;
void reverse(int i,int arr[],int n){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);

        
    }

 void reverse_s(int arr[], int n){               //according to the sheet
        if(n<=1)return;
        swap(arr[0],arr[n-1]);
        reverse_s(arr+1,n-2);
        
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    reverse_s(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" " ;
    return 0;
}