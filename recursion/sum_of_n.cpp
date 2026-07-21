#include <iostream>
using namespace std;
int print(int N){                          // functional way
            if(N==0)
            return 0;
            return N+print(N-1);
		}

void print1(int n, int sum){              // parameterised way
    if(n<1){
    cout<<sum<<endl;
    return ;
}
    print1(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    print1(n,0);
    return 0;
}