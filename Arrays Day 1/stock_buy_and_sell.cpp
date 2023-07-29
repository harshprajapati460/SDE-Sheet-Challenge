#include<bits/stdc++.h>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
   int mini = prices[0],maxprofit = 0;
    for(int i=1; i<prices.size(); i++){
        int cost = prices[i] - mini;
        maxprofit = max(cost,maxprofit);
        mini = min(mini,prices[i]);
    }
   return maxprofit;
}
int main(){

vector<int>arr = {7,1,5,4,3,99};
cout<<bestTimeToBuyAndSellStock(arr);
return 0;
}