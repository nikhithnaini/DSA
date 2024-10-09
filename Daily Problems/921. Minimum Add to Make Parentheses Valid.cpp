///////////////////// stack used ////////////
class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>st;
         
         int n=s.length();
         if(s.length()==0)return 0;
        
            for(int i=0;i<n;i++){
            
            
                if(!st.empty()&&(st.top()=='('&&s[i]==')')){
                        st.pop();
                    }
                
                else st.push(s[i]);
            }
            
        
        return st.size();
    }
};

//////////////////////// without Stack ////////////////////////
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open =0;
        int close =0;
        for(auto c:s){
            if(c=='(')open++;
            if(c==')'){
                if(open)open--;
                else close++;
            }
        }
        return open+close;
    }
};
