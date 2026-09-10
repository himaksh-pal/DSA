#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>& nums){
			for(int i=1;i<nums.size();i++){
                if(nums[i]>=nums[i-1]){

                }
                else
                return false;
            }
            return true;
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
        bool result = isSorted(nums);
        cout<<"result : "<<result;
}