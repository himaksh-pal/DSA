#include <iostream>
using namespace std;
int fib(int n) {
        if(n<=1)return n;
        int last= fib(n-1);
        int lastS= fib(n-2);
        return last + lastS;
        
    }
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}