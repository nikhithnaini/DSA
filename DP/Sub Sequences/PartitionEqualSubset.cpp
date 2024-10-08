class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<int>&nums,int ans,int i,int n){
        if(i>=n)return 0;
        if(ans<0)return 0;
        if(ans==0)return 1;
        if(dp[i][ans]!=-1)return dp[i][ans];
        int take=solve(dp,nums,ans-nums[i],i+1,n);
        int notake=solve(dp,nums,ans,i+1,n);
        return dp[i][ans]=(take||notake);
        
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0)return false;
        int res=sum/2;
        vector<vector<int>>dp(n,vector<int>(res+1,-1));
        return solve(dp,nums,res,0,n);
    }
};
