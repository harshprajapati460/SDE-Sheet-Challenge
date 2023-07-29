#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
      
    long long currsum = 0,maxsum = INT_MIN;
    for(int i = 0; i<n ; i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        if(currsum > maxsum){
            maxsum = currsum;
        }
    }
    return maxsum;
}
int main(){
    int arr[9] = {1,2,7,-4,3,2,-10,9,1};
    cout<<maxSubarraySum(arr,9);

}