class Solution
{
public:
    void merge(vector<int> &num1, int m, vector<int> &num2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (num1[i] > num2[j])
            {
                num1[k--] = num1[i--];
            }
            else
            {
                num1[k--] = num2[j--];
            }
        }
        // ek array reach kr gya aur dusra last index pr h tb chlege ye condt..
        while (i >= 0)
        {
            num1[k--] = num1[i--];
        }
        while (j >= 0)
        {
            num1[k--] = num2[j--];
        }
    }
};

// 1 2 3 0 0
// 4 5 3
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1,j=n-1,k=m+n-1;

        //k for merging the arry  ..hum dono arry ko lekr aur last me num1 pr k ko point kra dege

        while(i>=0 && j>=0)
          {
            /* jo bhe bda hoga usko chlyege
             3 < 6
             to isme else bali condt chlege k-- aur j--
             aise he chlega loop aur jo bhe loop
             out of bound hua whii ruk jyege hum

             tc = m+n total no of iteration time both
             sp = o(1)

            if(nums1[i]>nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else{
               nums1[k--]=nums2[j--];
            }
    }
        while(i>=0){
                nums1[k--]=nums1[i--];
        }
        while(j>=0)
        { nums1[k--]=nums2[j--]; }


    }
};*/