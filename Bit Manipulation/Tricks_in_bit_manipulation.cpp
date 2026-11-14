// void swap(int &a, int &b) {
//         a = a ^ b ;
//         b = a ^ b ;
//         a = a ^ b ;
//     }


// bool checkKthBit(int n, int k) {             // left shift
//         if((n & (1<<k)) != 0) return true;
//         return false;
        
//     }
// bool checkKthBit(int n, int k) {             // right shift
//         if((n>>k) & 1 == 1) return true;
//         return false;
        
//     }


// int setKthBit(int n, int k) {
//         return n | (1<<k);
//     }



// bool isPowerOfTwo(int n) {
//         if(n==0) return false;
//         if(n==INT_MIN) return false;
//         if((n & n-1) == 0) return true;
//         return false;
//     }




// int hammingWeight(int n) {      //brute
//         int cnt=0;
//         while(n>1){
//             cnt +=n&1;
//             n=n>>1;
//         }
//         if(n==1) cnt++;
//         return cnt;
//     }

//     int hammingWeight(int n) {    //optimal
//         int cnt=0;
//         while(n>0){
//             n=n&n-1;
//             cnt++;
//         }
//         return cnt;
//     }