class Solution {
public:
    int nextGreaterElement(int n) {
        
        vector<int>num;
        int a=n;
        while(n!=0){
            num.push_back(n%10);
            n=n/10;
        }
        
        reverse(num.begin(),num.end());
        int l=num.size()-2;
        while(l>=0&&num[l]>=num[l+1])l--;
        if(l<0)return -1;
        int j=num.size()-1;
        while(num[j]<=num[l])j--;
        swap(num[l],num[j]);
        reverse(num.begin()+l+1,num.end());
        long long ans=0;
        for(int i=0;i<num.size();i++){
            ans=ans*10+num[i];
        }
        if(ans<=a)return -1;
        return (ans > INT_MAX || ans <= a) ? -1 : ans;
    }
};
