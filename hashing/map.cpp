#include <iostream> 
#include <map>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    //compute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        // fetch
        cout<<mpp[q];
    }
    return 0;
}