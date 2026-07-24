#include <iostream>
using namespace std;
bool palindromeCheck(int i,string&s ){
    if(i>=s.size()/2) return true;
    if(s[i]=!s[s.size()-i-1]) return false;
    return palindromeCheck(i+1,s);


	}
int main(){
    string s;
    s={"madsm"};
    cout<<palindromeCheck(0,s);
    return 0;
}