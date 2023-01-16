/*
Input: s = "abbaca"
Output: "ca"

Explanation:

For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".*/
#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
    string removeDuplicates(string s)
    {
        int n = s.size(), i = 0;
        stack<char> st;

        while (i < n)
        {
            if (st.empty() || st.top() != s[i])
            {
                st.push(s[i]);
            }
            else
                st.pop();

            i++;
        }
        string ans = "";
        while (!st.empty())
        {
            char ele = st.top();
            st.pop();

            ans += ele;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};