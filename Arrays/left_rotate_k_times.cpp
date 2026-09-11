#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& nums, int k) {
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
        rotateArray(nums,k);
}