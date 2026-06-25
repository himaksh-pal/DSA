#include<iostream>
using namespace std;
void pattern8(int n){
    for(int i=0;i<n;i++ ){
            //space
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            //stars
            for(int j=0;j<2*(n-i)-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
}
void pattern9(int n){
    
        for(int i =1;i<=n;i++){
            //space
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            //stars
            for(int j=1; j<=(2*i)-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++ ){ 
            //space
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            //stars
            for(int j=0;j<2*(n-i)-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        
}
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0)start=0;
        else start=1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //num
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
}
void pattern13(int n) {
        int a=1;
        for(int i=1;i<=n;i++){
            for( int j=1;j<=i;j++){
                cout<<a<<" ";
                a++;
            }
            cout<<endl;
        }
    }
void pattern14(int n){
    for(int i=1;i<=n;i++){
        char ch = 65;
            for( int j=1;j<=i;j++){

                cout<<ch;
                ch++;
            }
            cout<<endl;
        }
    }
void pattern15(int n){
    for(int i=1;i<=n;i++){
        char ch =65;
        for(int j=n;j>=i;j--){
            cout<<ch;
            ch ++;
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char ch =65;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch ++;
    }
}
void pattern17(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            
        }
        //alp
        char ch = 'A';
        int breakpoint=(2*i-1)/2;
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<=breakpoint) ch ++;
            else ch --;

        }
        cout<<endl;
        
        
    }
}
void pattern18(int n){
    
}
void pattern19(int n){
    int spaces =0;
    for(int i=1;i<=n;i++){
        
        //star
        for(int j = 1; j<=n-i+1;j++){
            cout<<"*";
        }
        //space
        for(int j =1 ;j<=spaces;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
        spaces=spaces+2;
    }


    int spaces1 =spaces-2;
    for(int i=1;i<=n;i++){
        
        //star
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j =1 ;j<=spaces1;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        spaces1=spaces1-2;
    }
}
void pattern20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j =1;j<=star;j++){
            cout<<"*";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j =1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
        spaces-=2; 
        else
        spaces+=2;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if( i ==0 || j==0 || i == n-1 || j== n-1 ){
                cout<<"*";
            }    
            else cout<<" ";
        }
        cout<<endl;
        
    }
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    int n1;
    for(int i=0;i<t;i++){
        cin>>n1;
        pattern22(n1);
    }

    return 0;
}