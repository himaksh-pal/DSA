// int findXOR(int l, int r) {                                 // brute 
//         // code here
//         int ans=0;
//         for(int i = l ; i<=r;i++){
//             ans =ans ^i;
//         }
//         return ans;
//     }







// int XORn(int n){
//         if(n%4==1) return 1;
//         else if(n%4==2) return n+1;
//         else if(n%4==3) return 0;
//         return n;
//     } 
//     int findXOR(int l, int r) {                              // optimal 
//         // code here
//         int a = XORn(l-1);
//         int b = XORn(r);
        
//         return a^b;
//     }