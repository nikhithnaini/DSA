class Solution {
public:
   int solve(vector<int>&nums,vector<vector<int>>&dp,int i,int maxi,int sum,int n){
         if (i == n) {
            return sum == maxi ? 1 : 0; // Only count if the sum equals maxi
        }
         if(dp[i][sum]!=-1)return dp[i][sum];
         int take =solve(nums,dp,i+1,maxi,nums[i]|sum,n);
         int notake=solve(nums,dp,i+1,maxi,sum,n);
         return dp[i][sum]=take+notake;
   }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi =0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            maxi=maxi|nums[i];
        }
        vector<vector<int>> dp(n, vector<int>(maxi + 1, -1));
        return solve(nums,dp,0,maxi,0,n);
    }
};
