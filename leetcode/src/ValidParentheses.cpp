#include <stack>
#include <string>

using namespace std;

// This solution has optimal performance on leetcode
class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> stack;

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
            {
                stack.push(s[i]);
            }
            else if (!stack.empty())
            {
                char top = stack.top();
                stack.pop();
                if (top == '(' && s[i] != ')')
                {
                    return false;
                }
                if (top == '{' && s[i] != '}')
                {
                    return false;
                }
                if (top == '[' && s[i] != ']')
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }

        return stack.empty();
    }
};