#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int>& nums) {
    int n = nums.size();
    int lar = nums[0];
    for (int i=1;i<n;i++){
        if(nums[i]>lar){
            lar=nums[i];
        }
    }
    return lar;
    }
int main(){
    cout << "Enter the size of the vector : ";
        int n;
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of vector : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int result = largestElement(nums);
        cout<<"answer :"<<result<<" ";
    

}