int rob(vector<int>& nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return maxrob(n-1, nums, dp);
}