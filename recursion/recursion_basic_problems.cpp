#include <iostream>
using namespace std;
void N_times_name(int i,int n ){
    if(i>n)return; 
    cout<<"himaksh"<<endl;
    N_times_name(i+1,n);
}
void printNumbers(int n, int i=1){
        if(i>n)return;
        cout<<i<<endl;
        printNumbers(n,i+1);

    }
void printNumbers_rev(int n) {
        if(n==0) return;
        cout<<n<<endl;
        printNumbers_rev(n-1);
        // Your code goes here
    }    

int main(){
    int n;
    cin>>n;
    printNumbers_rev(n);


    return 0;
}         