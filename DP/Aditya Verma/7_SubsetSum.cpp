#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        bool t[n+1][sum+1];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) t[i][j] = false;
                if(j==0) t[i][j] = true;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=sum){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else {
               t[i][j] = t[i-1][j];
            }
        }
        }
        return t[n][sum];
    }
};