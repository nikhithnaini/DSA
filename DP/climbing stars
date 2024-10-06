class Solution {
public:
   int dp(int n,int i,vector<int>&v){
    if(i>n)return 0;
    if(i==n)return 1;
    if(v[i]!=-1)return v[i];
    int total=dp(n,i+1,v)+dp(n,i+2,v);
    v[i]=total;
    return v[i];
   }
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
       int ans= dp( n,0,v);
       return ans;
    }
};
