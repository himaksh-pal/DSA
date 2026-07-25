#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre computation
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    cout<<"enter th no of queries :"<<endl;



    int q;
    cin>> q;
    for(int i=0;i<q;i++){
        int num;
        cout<<"searching num :"<<endl;
        cin>>num;
        //fetching
        cout<<hash[num]<<endl;

    }
    return 0;
}