#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};

int main()
{
    // Example usage
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int n = nums.size() / 2;

    Solution sol;
    vector<int> shuffled = sol.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int num : shuffled)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
