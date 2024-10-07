////memorization//////
int solve(int day,int last,vector<vector<int>>& arr,vector<vector<int>>&dp){
      if(day==0){
          int maxi=INT_MIN;
          for(int i=0;i<3;i++){
              if(i!=last){
                  maxi=max(maxi,arr[day][i]);
              }
          }
          return maxi;
          
      }
      if(dp[day][last]!=-1)return dp[day][last];
      int maxi=0;
      for(int i=0;i<3;i++){
          if(last!=i){
          int value=arr[day][i]+solve(day-1,i,arr,dp);
          maxi=max(maxi,value);
          }
      }
      return dp[day][last]=maxi;
  }
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        vector<vector<int>>dp(n,vector<int>(4,-1));
       return  solve(n-1,3,arr,dp);
    }
