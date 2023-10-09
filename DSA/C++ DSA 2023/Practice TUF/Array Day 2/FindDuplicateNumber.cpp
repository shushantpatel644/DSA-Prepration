class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //it takes o(n) time and o(1 space)
        if(nums.size()> 1){
        int slow=nums[0];
        int fast=nums[nums[0]];
            
        while(slow!=fast){
                slow = nums[slow];
                fast = nums[nums[fast]];
            }
            fast=0;
            while(fast != slow){
                fast = nums[fast];
                slow = nums[slow];
            }
            return slow;
        }
        /*
         O(Nlog(N))
        int n = nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                count=nums[i];
                break;
            }
        }
        return count;
        */
    return -1;
    }
};