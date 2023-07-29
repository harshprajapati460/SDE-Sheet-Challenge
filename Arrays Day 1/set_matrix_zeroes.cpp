#include<bits/stdc++.h>
using namespace std;
// TIME COMPLEXITY O((NxM) * O(N) * O(M)) + O(NxM) --> O(N^3)
void Method1(vector<vector<int>>&ans,int n,int m){
        // Brute force 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(ans[i][j] == 0){
                    for(int p=0; p<m; p++){
                        if(ans[p][j] != 0) ans[p][j] = -1;
                    }
                    for(int q=0; q <n; q++){
                         if(ans[i][q] != 0)  ans[i][q] = -1;
                    }
                }
            }

        }
         

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(ans[i][j] == -1){
                    ans[i][j] = 0;
                }
            }
            

        }
        for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

}
//TIME COMPLEXIYT O(2(NXM)) SPACE O(N) + O(M)
void Method2(vector<vector<int>>&ans,int n,int m){
       // using 2 extra array for row and column
       int row[n];
       int col[m];
       for(int i=0; i<m; i++){
        col[i] = 0;
       }
       for(int j=0; j<n; j++){
        row[j] = 0; 
       }
       for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            if(ans[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
       }
       for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            if(row[i] || col[j]){
                ans[i][j] = 0;
            }
        }
       }
       for(int i=0; i<m; i++){
        cout<<col[i]<<" ";
       }
       cout<<endl;
       for(int j=0; j<n; j++){
        cout<<row[j]<<" ";
       }
       cout<<endl;

         for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl; 
}
// TIME COMPLEXITY O(2(NXM)) 
void Method3(vector<vector<int>>&ans,int n,int m){
    // row --> matrix[0][...];
    // col --> matrix[...][0]
    int col0 = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ans[i][j] == 0){
                ans[i][0] = 0;
                if(j != 0) 
                   ans[0][j] = 0;
                else 
                   col0 = 0;   
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(ans[i][0] == 0 || ans[0][j] == 0){
                  ans[i][j] = 0;
            }
        }
    }
    if(ans[0][0] == 0){
        for(int i=0; i<n; i++){
            ans[0][i] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0; i<m; i++){
            ans[i][0] = 0;
        }


    } 
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){

vector<vector<int>>ans;

int n,m;
cin >> n >> m;
for(int i=0; i<n; i++){
    int temp;
    vector<int>t;
    for(int j=0; j<m; j++){
        cin >> temp;
        t.push_back(temp);
    }
    ans.push_back(t);
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//Method1(ans,n,m);
//Method2(ans,n,m);
Method3(ans,n,m);
return 0;
}