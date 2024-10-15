class Solution {
public:
    long long minimumSteps(string s) {
        int one=0;
        long long count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')one++;
            if(s[i]=='0'){
                
               count=count+one;
            }

        }
        return count;
    }
};
