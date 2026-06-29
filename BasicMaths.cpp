#include <iostream>
using namespace std;
int count_digit(int n){
    int count=0;
    while(n>0){
        int lastDigit= n%10;
        n=n/10;
        count++;
    }
    return count;
}
int reverseNumber(int n) {
        int rev=0;
         while(n>0){
        int lastdigit = n%10;
        rev=rev*10+lastdigit;

        n=n/10;
    }
    return rev;
}
bool isPalindrome(int n){
    int temp = n;
    int rev=0;
    while(temp>0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    } 
    if ( n==rev) return true;
    else return false;


    }
int main(){
    bool result= isPalindrome(123);
    cout<<result;

    
    

    return 0;
}