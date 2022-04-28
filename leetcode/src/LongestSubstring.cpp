#include <set>
#include <string>
#include <vector>

using namespace std;
// This solution is O(n), but not optimal
class Solution
{
  public:
    int lengthOfLongestSubstring(string s)
    {
        int start = 0, res = 0;
        set<int> chars;

        for (int i = 0; i < s.size(); i++)
        {
            while (chars.find(s[i]) != chars.end())
            {
                chars.erase(s[start]);
                start++;
            }
            chars.insert(s[i]);
            res = max(res, i - start + 1);
        }

        return res;
    }
};

class SolutionOptimal
{
  public:
    int lengthOfLongestSubstring(string s)
    {
        int start = -1, res = 0;
        vector<int> indexOfChars(256, -1);

        for (int i = 0; i < s.size(); i++)
        {
            if (indexOfChars[s[i]] > start)
            {
                start = indexOfChars[s[i]];
            }

            indexOfChars[s[i]] = i;
            res = max(res, i - start);
        }

        return res;
    }
};