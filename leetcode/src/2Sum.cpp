#include <unordered_map>
#include <vector>

using namespace std;

// solution in O(n)
class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> answer;
        unordered_map<int, int> lookUp;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (lookUp.find(complement) != lookUp.end())
            {
                answer = {i, lookUp[complement]};
                break;
            }
            else
            {
                lookUp.insert(make_pair(nums[i], i));
            }
        }
        return answer;
    }
};