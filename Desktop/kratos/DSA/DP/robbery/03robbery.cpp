#include <bits/stdc++.h>
using namespace std;

int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[1], nums[0]);
    int curr, prev = max(nums[1], nums[0]), prev2 = nums[0];

    for (int i = 2; i < n; i++)
    {
        curr = max(nums[i] + prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    return curr;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Test case 1: Houses = [1, 2, 3, 1]" << endl;
    cout << "Maximum money: " << rob(nums1) << endl;  

    vector<int> nums2 = {2, 7, 9, 3, 1};
    cout << "Test case 2: Houses = [2, 7, 9, 3, 1]" << endl;
    cout << "Maximum money: " << rob(nums2) << endl;  

    vector<int> nums3 = {1, 2};
    cout << "Test case 3: Houses = [1, 2]" << endl;
    cout << "Maximum money: " << rob(nums3) << endl;  

    vector<int> nums4 = {1};
    cout << "Test case 4: Houses = [1]" << endl;
    cout << "Maximum money: " << rob(nums4) << endl;  

    return 0;
}
