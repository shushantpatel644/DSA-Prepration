class Solution
{
public:
    int maxSubArray(vector<int> &num)
    {
        int maxSsum = 0;
        int currSum = 0;

        for (int i = 0; i < a.length(); i++)
        {
            currSum = currSum + a[i];
            if (currSum > maxSsum)
            {
                maxSsum = currSum;
            }
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSsum;
    }
};
/*class Solution {
public:
     int maxSubArray(vector<int>& num){
      int currSum = 0;
        int max_Sum = num[0];
        for(int i=0;i<num.size();i++){
                    // if curr_sum is getting larger than previous max Sum then just update the max Sum with curr sum
            currSum = currSum + num[i];
            
            if(currSum > max_Sum) max_Sum = currSum;
                //  if incase current sum is in negative then we loose our maximum subarray so update current sum with 0

            if(currSum < 0) currSum = 0;
                    //  if incase current sum is in negative then we loose our maximum subarray so update current sum with 0

        }
         return max_Sum;
    }
};*/