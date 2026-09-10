#include <iostream>
#include<vector>
using namespace std;
int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int lar=nums[0];
        int slar=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>lar){
                slar=lar;
                lar=nums[i];
            }
            else if(nums[i]>slar && nums[i]<lar){
                slar=nums[i];
            }
        
        }
    return slar;
      
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
        int result= secondLargestElement(nums);
        cout<<"result : "<<result;

}