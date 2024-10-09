int solve(vector<vector<int>>& dp, int arr[], int ans, int i, int n, int mod) {
if (i >= n) return ans == 0 ? 1 : 0;
if(ans<0)return 0;
if (dp[i][ans] != -1) return dp[i][ans]; // Return memoized value.
        
        int take = solve(dp, arr, ans - arr[i], i + 1, n, mod)%mod ;
        int notake = solve(dp, arr, ans, i + 1, n, mod)%mod ;
        
        return dp[i][ans] = (take + notake) % mod;
    }
    
    int perfectSum(int arr[], int n, int sum) {
        int mod = 1e9 + 7;
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1)); // Memoization table
        return solve(dp, arr, sum, 0, n, mod);
    }
