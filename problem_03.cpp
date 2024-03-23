#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        if (n == 0 || n == 1)
            return n;
        int c = 0;
        int ans = 0;
        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            c++;
            if (mp.find(s[i]) != mp.end())
            {
                int index = mp[s[i]];
                if (i - index + 1 <= c)
                {
                    c = i - index;
                    // mp[s[i]] = i;
                }
            }
            mp[s[i]] = i;
            ans = max(ans, c);
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test cases
    string test1 = "abcabcbb";
    cout << "Length of the longest substring without repeating characters in '" << test1 << "' is: "
         << sol.lengthOfLongestSubstring(test1) << endl;

    string test2 = "bbbbb";
    cout << "Length of the longest substring without repeating characters in '" << test2 << "' is: "
         << sol.lengthOfLongestSubstring(test2) << endl;

    string test3 = "pwwkew";
    cout << "Length of the longest substring without repeating characters in '" << test3 << "' is: "
         << sol.lengthOfLongestSubstring(test3) << endl;

    return 0;
}
