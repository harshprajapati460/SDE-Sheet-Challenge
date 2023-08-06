#include<bits/stdc++.h>
using namespace std;
// METHOD 1 
//USING TWO FOR LOOPS FOR FINDING TARGET
// TIME COMPLEXITY O(N^2)
bool method_1(vector<int>arr,int n, int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == target) return true;
        }
    }
    return false;
}
// METHOD 2
//USING HASHMAP OR HASHSET FOR FINDING TARGET OR RETURNING INDEX
// TIME COMPELXITY IS O(N) SPACE COMPLEXITY S(N)
bool method_2(vector<int>arr,int n,int target){
    set<int>s;
    for(int i=0; i<n; i++){
        int x = target - arr[i];
        if(s.find(x) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
// METHOD 3
//USING LOOP AND BINARY SEARCH TECHNIQUE
// TIME COMPLEXITY O((2 * N LOG(N) ) 

bool method_3(vector<int>arr,int n,int target){
     sort(arr.begin(),arr.end());
     for(int i=0; i<n; i++){
        int q = target - arr[i];
        int low=0,high=n-1,mid;
        while(low <= high){
            mid = low + (high-low)/2;
            if(arr[mid] == q) return true;
            else if(arr[mid] > q) high = mid-1;
            else low = mid+1;
        }
     }
     return false;
}
//METHOD 4
//USING TWO POINTER ALGO 
// TIME COMPLEXITY O(N*LOG(N)) + O(N)
bool method_4(vector<int>arr,int n, int target){
    int left = 0,right = n-1;
    sort(arr.begin(),arr.end());
    while(left < right){
    int sum = arr[left]+arr[right];
    if(sum == target) return true;
    else if(sum > target)  right--;
    else left++;
}
return false;
}

int main(){ 
vector<int>arr =  {873 ,479, 718, 979, 886, 768, 337, 703}; 
int target = 1040;
cout<<"Method 1 and -->  "<<method_1(arr,arr.size(),target)<<endl;
cout<<"Method 2 and -->  "<<method_2(arr,arr.size(),target)<<endl;
cout<<"Method 3 and -->  "<<method_3(arr,arr.size(),target)<<endl;
cout<<"Method 4 and -->  "<<method_4(arr,arr.size(),target)<<endl;
return 0;
}