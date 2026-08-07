#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cout<<"the value of n :"<<endl;
    cin>>n;

    int arr[n]={1,2,3,3,3,4,4,5,5,5,5,5,5};
    // cout<<"enter the elements in the array :"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int max=mpp[1];
    int key=1;
    for(auto it:mpp){
        if(it.second>max){
            max=it.second;
            key=it.first;
        }
    }
    
    cout<<key;
}