#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of string :"<<endl;
    cin>>n;
    char s[n];
    cout<<"enter the charcters :"<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    //pre computation
    int hashh[256]={0};
    for(int i=0;i<n;i++){
        hashh[s[i]] ++;
    }
    // for(int i=0 ;i<256;i++){
    //     cout<<s[i];
    // }


    cout<<"enter th no of queries :"<<endl;
    int q;
    cin>> q;
    for(int i=0;i<q;i++){
        char ch;
        cout<<"searching char :"<<endl;
        cin>>ch;
        //fetching
        cout<<hashh[ch]<<endl;

    }

    return 0;
} 