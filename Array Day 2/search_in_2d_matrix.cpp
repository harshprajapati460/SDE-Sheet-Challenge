#include<bits/stdc++.h>
using namespace std;
bool bs(vector<int>&mat,int low,int high,int target){
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(mat[mid] == target) return true;
        else if(mat[mid] < target) low =mid+1;
        else high = mid-1;
    }
    return false;
}   
bool search_in_matrix(vector<vector<int>>& mat, int target) {
        for(int i=0; i<mat.size(); i++){
            if(bs(mat[i],0,mat[0].size()-1,target)) return true;
        }
        return false;
}
// TIME COMPLEXITY O(M*LOG(N))  BECAUSE OF BINARY SEARCH
int main(){

int n,m,target;
cin >> n >> m >> target;
vector<vector<int>>ans;
for(int i=0; i<n; i++){
    int temp;
    vector<int>t;
    for(int j=0; j<m; j++){
        cin >> temp;
        t.push_back(temp);
    }
    ans.push_back(t);
}

cout<<search_in_matrix(ans,target);

return 0;
}