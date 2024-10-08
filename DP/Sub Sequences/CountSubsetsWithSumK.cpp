public:
	int solve(vector<vector<int>>&dp,int arr[],int ans,int i,int n,int mod){
        if(i>=n)return 0;
        if(ans<0)return 0;
        if(ans==0)return 1;
        if(dp[i][ans]!=-1)return dp[i][ans];
        int take=solve(dp,arr,ans-arr[i],i+1,n,mod);
        int notake=solve(dp,arr,ans,i+1,n,mod);
        return dp[i][ans]=(take+notake)%mod;
        
    }
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int mod =1e9+7;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(dp,arr,sum,0,n,mod);
	}
