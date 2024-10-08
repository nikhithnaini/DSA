//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
 int solve(vector<vector<int>>&dp,vector<int>&arr,int sum,int i,int n){
     if(sum==0)return 1;
     if(sum<0)return 0;
     if(i>=n)return 0;
     if(dp[i][sum]!=-1)return dp[i][sum];
     int take=solve(dp,arr,sum-arr[i],i+1,n);
     int notake=solve(dp,arr,sum,i+1,n);
     return dp[i][sum]=(take||notake);
     
     
 }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return solve(dp,arr,sum,0,n)==1;
        
    
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
