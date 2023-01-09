class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        int ans = 0;
        unordered_map<int, int> freq;
        for (auto &word : words)
        {
            int mask = 0;
            for (auto c : word)
                mask |= 1 << (c - 'a');
            ans += freq[mask]++;
        }
        return ans;
    }
};

// Complexity
// Time O(NW)
// Space O(N)

// using hash table

int left = 1, right = x;
while (left <= right)
{
    int mid = left + (right - left) / 2;
    if (mid == x / mid)
    {
        return mid;
    }
    else if (mid < x / mid)
    {
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}
return right;