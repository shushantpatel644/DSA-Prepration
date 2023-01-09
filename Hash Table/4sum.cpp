class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }

                int tSum = target - (nums[i] + nums[j]);
                int l = j + 1, h = n - 1;
                while (l < h)
                {
                    if (nums[l] + nums[h] == tSum)
                    {
                        vector<int> oneAns = {nums[i], nums[j], nums[l], nums[h]};
                        ans.push_back(oneAns);
                        while (l < h && nums[l] == nums[l + 1])
                        {
                            l++;
                        }
                        while (l < h && nums[h] == nums[h - 1])
                        {
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if (nums[l] + nums[h] < tSum)
                    {
                        l++;
                    }
                    else
                    {
                        h--;
                    }
                }
            }
        }

        return ans;
    }
};
/*class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans; //2d vector
        int n=nums.size();
        
        for(int i=0;i<n-3;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                
            int tsum = target-(nums[i]+ nums[j]);
            int l=j+1,h=n-1;
            while(l<h){
                if(nums[l]+nums[h] == tsum){
                    vector<int>oneAns={nums[i],nums[j],nums[l],nums[h]};
                    ans.push_back(oneAns);
                    while(l<h &&  nums[l] == nums[l+1]){
                        l++;
                    }
                     while(l<h &&  nums[h] == nums[h-1]){
                        h++;
                     }
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]<tsum){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        }
        return ans;
    }
};

//sort the array first
//fix i,j i->0 , n->-3 and j=i+1 , n->-2
*/
