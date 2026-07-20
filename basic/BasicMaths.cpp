#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
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
bool isArmstrong(int n) {
    int temp=n;
    int dup=n;
    int sum=0;
    int count=0;
    while(dup>0){
        dup=dup/10;
        count ++;
    }
    while(temp>0){
        int ls=temp%10;
        sum=sum+pow(ls,count);
        temp=temp/10;

    }
    if(sum==n)return true;
    else return false;

    }
vector<int> divisors(int n) {
    vector<int>result;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0)
            result.push_back(i);
            if((n/i)!=i)
            result.push_back(n/i);
        }
        sort(result.begin(),result.end());
        for(auto  it : result){
            cout<<it<<" ";
        }

    }
bool isPrime(int n) {
    int cnt=0;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            cnt ++;
            if((n/i)!=i){
                cnt++;            }
        }
    }
    if(cnt==2)return true;
    else return  false;

        
    }    
int GCD(int n1,int n2) {
    int gcd=1;
    for(int i = min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;

    }
int main(){
    int r = GCD(11,13);
    cout<<r;

     
    

    return 0;
}