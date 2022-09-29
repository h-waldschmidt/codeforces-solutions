#include <vector>
#include <unordered_map>

using namespace std;

// Brute Force
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

// optimized through Sorting
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};

// best solution with a hash map / unordered_map
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, bool> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map[nums[i]])
                return true;
            map[nums[i]] = true;
        }
        return false;
    }
};