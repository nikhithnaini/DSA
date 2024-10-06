//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int solve(vector<int>&dp,vector<int>&height,int i,int k){
      if(i==0)return 0;
      if(dp[i]!=-1)return dp[i];
      int value=INT_MAX;
      
      for(int n=1;n<=k;n++){
          if(i-n>=0)
          value=min(value,solve(dp,height,i-n,k)+abs(height[i]-height[i-n]));
      }
     
      dp[i]=value;
      return dp[i];
   }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
         vector<int>dp(n,-1);
        return solve(dp,arr,n-1,k);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends
