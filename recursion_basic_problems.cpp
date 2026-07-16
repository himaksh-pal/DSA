#include <iostream>
using namespace std;
void N_times_name(int i,int n ){
    if(i>n)return; 
    cout<<"himaksh"<<endl;
    N_times_name(i+1,n);
}
void printNumbers(int n, int i=1){
        if(i>=n)return;
        cout<<i<<endl;
        printNumbers(n-1,i+1);

    }

int main(){
    int n;
    cin>>n;
    printNumbers(n);


    return 0;
}