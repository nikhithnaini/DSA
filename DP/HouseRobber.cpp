class Solution {
public:
int solve(vector<int>&dp,vector<int>&nums,int n,int i){
    if(i>=n)return 0;
    //if(n==2)return max(nums[0],nums[1]);
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+solve(dp,nums,n,i+2);
    int notake=solve(dp,nums,n,i+1);
    dp[i]=max(take,notake);
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(dp,nums,n,0);
    }
};
