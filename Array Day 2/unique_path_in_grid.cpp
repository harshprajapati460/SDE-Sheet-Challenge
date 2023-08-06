#include<bits/stdc++.h>
using namespace std;
// Brute Force  Recursive TIME COMPLEXITY NOT GOOD EXPONENTIAL

int Paths(int i,int j,int m,int n){
	if(i >= n) return 0;
	if(j >= m) return 0;
	if(i == n-1 && j == m-1) return 1;

	return Paths(i+1,j,m,n) + Paths(i,j+1,m,n);
}
int unique_paths(int m, int n) {
	return Paths(0,0,m,n);
}
// USING DP TO OPTIMIZE THE COMPLEXITY
int unique_path_dp(int i,int j,int n,int m,vector<vector<int>>&dp){
    if(i >= n) return 0;
	if(j >= m) return 0;
	if(i == n-1 && j == m-1) return 1;

	if(dp[i][j] != -1){
        return dp[i][j];
    }
    else {
        dp[i][j] = unique_path_dp(i+1,j,n,m,dp) + unique_path_dp(i,j+1,n,m,dp);
    }
    }
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int combinational(int m,int n){
   if(m > n){
   return nCr(m+n-2,n-1);
   }
   else {
     return nCr(m+n-2,n-1);
   }
}

int main(){

int n,m;
cin >> n >> m;
vector<int>row(m+1,-1);
vector<vector<int>>dp(n+1,row);
cout<<"Using recursion --> "<<unique_paths(m,n)<<endl;
cout<<"Using dp --> "<<unique_path_dp(0,0,m,n,dp)<<endl;
cout<<"Using combinational --> "<<combinational(m,n)<<endl;
return 0;
}