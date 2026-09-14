#include<bits/stdc++.h>
using namespace std;
vector<int> unionArrayB(vector<int>& nums1, vector<int>& nums2) { // brute
        int n1 = nums1.size();
        int n2 = nums2.size();
        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            st.insert(nums2[i]);
        }
        int t = st.size();
        int i=0;
        vector<int> union1(t);
        for( auto it : st){
            union1[i]=it;
            i++;
        }
        return union1;
    }
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) { // optimal
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> UR;
        int i=0;
        int j=0 ;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(UR.size()==0 || UR.back()!=nums1[i]){
                    UR.push_back(nums1[i]);
                }
            i++;    
            }
            else{
                if(UR.size()==0 || UR.back()!=nums2[j]){
                    UR.push_back(nums2[j]);
                }
            j++;    

            
        }  
    } 
        while(j<n2){
            if(UR.size()==0 || UR.back()!=nums2[j]){
                    UR.push_back(nums2[j]);
                }
            j++;    

        } 
        while(i<n1){
            if(UR.size()==0 || UR.back()!=nums1[i]){
                    UR.push_back(nums1[i]);
                }
            i++;    
        }   
        return UR;
    }

int main(){
    cout << "Enter the size of the array 1 : ";
        int n1;
        cin >> n1;
        vector<int> nums1(n1);
        cout << "Enter the elements of vector 1 : " << endl;
        for (int i = 0; i < n1; i++)
        {
            cin >> nums1[i];
        }


        cout << "Enter the size of the array 2 : ";
        int n2;
        cin >> n2;
        vector<int> nums2(n2);
        cout << "Enter the elements of vector 2 : " << endl;
        for (int i = 0; i < n2; i++)
        {
            cin >> nums2[i];
        }

        vector<int> result =unionArray(nums1,nums2);
        for( auto val : result){
            cout<<val<<" ";
        }
    return 0;
}