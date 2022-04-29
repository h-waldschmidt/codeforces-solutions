#include <vector>

using namespace std;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int left = 0, right = 1, maxProfit = 0;

        while (right < prices.size())
        {
            if (prices[left] < prices[right])
            {
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            }
            else
            {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};