#include<bits/stdc++.h>
using namespace std;
//VARIATION 1 PRINT THE ELEMENT PRESENT IN NTH ROW AND CTH COLUMN GIVEN N AND C
// TIME COMPLEXITY O(r)
    int nCr(int n, int r) {
        long long res = 1;

        // calculating nCr:
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }
//VARIATION TWO PRINT ENTIRE ROW 
// TIME COMPLEXITY O(N*R)
void pascalTriangle_row(int n) {
    // printing the entire row n:
    for (int c = 1; c <= n; c++) {
        cout << nCr(n - 1, c - 1) << " ";
    }
    //cout << "n";
}
// VARIATION 3 PRINT ENTRIE PASCAL'S TRIANGLE UPTO N
// 
void Pascal(int n){
    
    for(int row = 1; row <= n; row ++){
        for(int col = 1; col <= row; col++){
            cout<<nCr(row-1,col-1)<<" ";
        }
        cout<<endl;
    }
}
int main(){

int n;
cin >> n;
//if(c > n) c = n - c;
//cout<<ncr(n-1,c-1)<<endl;
//pascalTriangle_row(n);
Pascal(n);
return 0;
}