#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp.
    }
    }
int main(){
    cout << "Enter the size of the array : ";
        int n;
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of vector : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        rotateArray(nums);
}