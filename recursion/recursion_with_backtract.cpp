#include <iostream>
using namespace std;
void print(int i,int n){
    if(i<1)return;
    print(i-1,n);
    cout<<i<<endl;
}
void print_rev(int i,int n){
    if(i>n)return;
    print_rev(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print_rev(1,n);
    return 0;
}