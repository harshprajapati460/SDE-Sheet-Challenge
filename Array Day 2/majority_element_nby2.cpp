#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	// Write your code here
	int low = 0;
	sort(v.begin(),v.end());
	int high = v.size()-1;
	int mid = low + (high-low)/2;
	if(v[mid] == v[0]) return v[0];
	while(v[mid] == v[mid-1]){
		mid--;
	}
	if(v[mid] == v[mid+v.size()/2]) return v[mid];
	return -1;
}
int main(){

vector<int>arr = {2 ,2, 1, 3, 1, 1, 3, 1, 1};
cout<<majorityElement(arr);

return 0;
}