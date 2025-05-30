#include <bits/stdc++.h>
using namespace std;

int minCostToClimb(vector<int> &cost){
    int n = cost.size();
    
    if (n < 2) return 0;
    if (n == 2) return min(cost[0], cost[1]);
    
    int prev2 = cost[0];  // Cost to reach step 0
    int prev = cost[1];   // Cost to reach step 1
    int curr;

    for(int i = 2; i < n; i++){
        curr = cost[i] + min(prev, prev2);
        prev2 = prev;
        prev = curr;
    }
    
    return min(prev, prev2);
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
