#include <iostream>
#include <vector>
using namespace std;
vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<=n-1;i++){
            int Didswap=0;
            for(int j=0;j<=(n-2)-i;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    Didswap=1;
                }
            }
            if(Didswap==0){
                break;
            }
        
        }
        return nums;

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
        vector<int>  result = bubbleSort(nums);
        for (int val : result) {
        cout << val << " ";
    }
    return 0;
}