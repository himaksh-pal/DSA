#include <iostream>
#include <vector>
using namespace std;
void my_selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

vector<int> selectionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }
        // swap the found minimum with the first unsorted element
        swap(nums[i], nums[minIdx]);
    }
    return nums;
}

    int main()
    {
        cout << "Enter the size of the array : ";
        int n;
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the elements of vector : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        vector<int>  result = selectionSort(nums);
        for (int val : result) {
        cout << val << " ";
    }

        return 0;
    }