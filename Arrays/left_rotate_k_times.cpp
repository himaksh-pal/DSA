#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse(vector<int>& nums,int start, int end){ 
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}
// void rotateArray1(int arr[],int k,int n){     // optimal
//     Reverse(arr,0,k-1);
//     Reverse(arr,k,n-1);
//     Reverse(arr,0,n-1);
// }
void rotateArray(vector<int>& nums, int k) { // brute
    int n=nums.size();
    k=k%n;
    int temp[k];
    
    for(int i=0;i<k;i++){
        temp[i]=nums[i];
    }
    

    for(int i=k;i<n;i++){
        nums[i-(k)]=nums[i];
    }

    int i=0;
    for(int j=n-k;j<n;j++){
        nums[j]=temp[i];
        i++;
    }

    for( int val : nums){
        cout<<val<<" ";
    }
    }
void rotateRight(vector<int>& nums, int k) {

        int n = nums.size();
        k=k%n;
        Reverse(nums,0,n-k-1);
        Reverse(nums,n-k,n-1);
        Reverse(nums,0,n-1);
        
    }
    int main(){
    cout << "Enter the size of the array : ";
        int n;
        int k;

        cin >> n;

        cout<<endl<<"value of k :";
        cin>>k;
        vector<int> nums(n);
        cout << "Enter the elements of vector : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        rotateRight(nums,k);
        for(int val : nums){
            cout<<val<<" ";
        }
}