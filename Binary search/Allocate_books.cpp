#include <bits/stdc++.h>
using namespace std;
int CountStudent(vector<int> & arr,int pages){
    int n = arr.size();
    int Student=1;
    int PagesToStudent =0;
    for(int i =0;i<n;i++){
        if(arr[i]+PagesToStudent<=pages){
            PagesToStudent=arr[i]+PagesToStudent;

        }
        else{
            Student++;
            PagesToStudent=arr[i];
        }
    }
    return Student;
}
// int findPages(vector<int> &arr, int m)  {     // linear search 

//     int low = *max_element(arr.begin(),arr.end());
//     int n = arr.size();

//     if(m>n) return -1;


//     int sum=0;
//     for(int i =0;i<n;i++){
//         sum+=arr[i];
//     }
//     int high = sum;
//     for(int pages = low;pages<=high;pages++){
//         if(CountStudent(arr,pages)<=m) return pages;
//     }
//     return -1;
        
// }

int findPages(vector<int> &arr, int m)  {          // binary search
    int n = arr.size();
    if(m>n) return -1;
    int low = *max_element(arr.begin(),arr.end());
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    int high = sum;
    int ans=-1;
    while (low<=high){
        int mid = (low+high)/2;
        if(CountStudent(arr,mid)<=m){
            ans = mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    int m = 3;
    vector<int> arr ={5, 5, 5, 5};
    cout<<findPages(arr,m);

    return 0;
}