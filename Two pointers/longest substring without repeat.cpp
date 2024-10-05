class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        if(n==0)return 0;
        int left=0;
        int right=0;
        int ans=INT_MIN;
        map<char,int>m;
        while(left<=right&&right<n){
            if(m.find(s[right])==m.end()){
                m[s[right]]=right;
            }
            else{
                left = max(m[s[right]] + 1, left);
                m[s[right]]=right;
                
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
