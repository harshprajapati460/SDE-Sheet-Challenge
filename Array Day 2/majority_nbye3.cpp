#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	vector<int>ans;
	map<int,int>map;
	for(auto it:v){
		map[it]++;
	}
	for(auto it:map){
		if(it.second > n/3) ans.push_back(it.first);
	}
	return ans;
}
int main(){
vector<int>arr = {2 ,2, 1, 3, 1, 1, 3, 1, 1,3,3};
vector<int>ans = majorityElement(arr);
for(auto it:ans){
    cout<<it<<' ';
}
return 0;
}