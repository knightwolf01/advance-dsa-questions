#include <bits/stdc++.h>
using namespace std;

int maxrob(int i, vector<int> &nums, vector<int> &dp){
    if(i == 0) return nums[0];
    if(i == 1) return max(nums[1],nums[0]);

    if(dp[i] != -1) return dp[i];
    
    return dp[i] = max(nums[i]+ maxrob( i-2 ,nums,dp), maxrob(i-1,nums, dp));
}

int rob(vector<int>& nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return maxrob(n-1, nums, dp);
}

int main(){
    // Test case 1: Simple case
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test case 1: Houses = [1, 2, 3, 1]" << endl;
    cout << "Maximum money: " << rob(nums1) << endl;  // Expected output: 4 (rob house 1 and 3)

    // Test case 2: Longer sequence
    vector<int> nums2 = {2, 7, 9, 3, 1};
    cout << "Test case 2: Houses = [2, 7, 9, 3, 1]" << endl;
    cout << "Maximum money: " << rob(nums2) << endl;  // Expected output: 12 (rob house 2 and 4)

    // Test case 3: Only two houses
    vector<int> nums3 = {1, 2};
    cout << "Test case 3: Houses = [1, 2]" << endl;
    cout << "Maximum money: " << rob(nums3) << endl;  // Expected output: 2

    // Test case 4: Single house
    vector<int> nums4 = {1};
    cout << "Test case 4: Houses = [1]" << endl;
    cout << "Maximum money: " << rob(nums4) << endl;  // Expected output: 1

    return 0;
}
