#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int minCost(int n, vector<int>& cost, vector<int> &dp){
    if(n<=1) return 0;

    if(dp[n]!=-1) return dp[n];
    return dp[n] = min(cost[n-1]+minCost(n-1,cost,dp), cost[n-2]+minCost(n-2,cost,dp));
}

int minCostToClimb(vector<int> cost){
    int n = cost.size();
    vector<int> dp(n+1, -1);
    return minCost(n,cost, dp);
}

int main(){
    // Test case 1: Simple case
    vector<int> cost1 = {10, 15, 20};
    cout << "Test case 1: Cost = [10, 15, 20]" << endl;
    cout << "Minimum cost: " << minCostToClimb(cost1) << endl;  // Expected output: 15

    // Test case 2: Longer sequence
    vector<int> cost2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << "Test case 2: Cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]" << endl;
    cout << "Minimum cost: " << minCostToClimb(cost2) << endl;  // Expected output: 6

    // Test case 3: Minimum length case
    vector<int> cost3 = {10, 15};
    cout << "Test case 3: Cost = [10, 15]" << endl;
    cout << "Minimum cost: " << minCostToClimb(cost3) << endl;  // Expected output: 10

    return 0;
}
