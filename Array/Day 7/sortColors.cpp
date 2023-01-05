class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        {
            int x = nums[mid];
            if (x == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (x == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};
