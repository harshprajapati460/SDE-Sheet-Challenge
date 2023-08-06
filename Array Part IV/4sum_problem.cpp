#include<bits/stdc++.h>
using namespace std;
// METHOD 1
// USING 4 LOOPS TO FIND QUADRIPLES
// TIME COMPLEXITY O(N^4)
bool method_1(vector<int>nums,int n,int target){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; j++){
                for(int p=k+1; p<n; p++){
                    int sum = nums[i]+nums[j]+nums[k]+nums[p];
                    if(sum == target) return true;
                }
            }
        }
    }
    return false;
}
// METHOD 2
// TIME COMPLEXI
bool method_2(vector<int>nums,int n,int target){
    set<int>s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int x = target - nums[i] - nums[j] - nums[k];
                if(s.find(x) != s.end()){
                    return true;
                }
                s.insert(nums[i]);
            }
        }
    }
    return false;
}
// METHOD 3
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<nums.size();j++){
            if(j!=(i+1) && nums[j]==nums[j-1])continue;
         int l=j+1,h=nums.size()-1;
         while(l<h){
             int sum=nums[i]+nums[j]+nums[l]+nums[h];
             if(sum==target){
                ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                 l++;
                 h--;
                 while(l<h && nums[l]==nums[l-1])l++;
                 while(l<h && nums[h]==nums[h+1])h--;
                 }
             else if(sum<target){
                 l++;
             }
             else{
                 h--;
             }
            
                 
    
         }

        }
      
    }
      return ans;
}
int main(){

int n;
return 0;
}