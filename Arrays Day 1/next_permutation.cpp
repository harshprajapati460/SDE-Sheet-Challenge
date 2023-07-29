#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &A) {
     int n = A.size();
    // Write your code here.
   int idx =-1;
   for(int i=n-2; i >= 0; i--){
       if(A[i] < A[i+1]){
           idx = i;
           break;
       }
   }
  
   if(idx == -1){
       reverse(A.begin(),A.end());
       return A;
   }

   for(int i=n-1; i > idx ; i--){
        if(A[idx] < A[i]){
            swap(A[idx],A[i]);
            break;
        }
   }
   reverse(A.begin()+idx+1,A.end());
   return A;
}
int main(){

int n;
cin >> n;
vector<int>v;
for(int i=0; i<n; i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
}
vector<int>ans = nextGreaterPermutation(v);
for(auto it:ans){
    cout<<it<<" ";
}
return 0;
}