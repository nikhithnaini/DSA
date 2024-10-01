class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n =nums2.size();
    for(int i=0;i<nums1.size();i++){
    auto index = find(nums2.begin(),nums2.end(),nums1[i]);
    auto pos= distance(nums2.begin(),index);
     if(pos+1<=n-1){
        int end=pos+1;
        while(end<=n-1){
        if(nums2[pos]<nums2[end]){
   ans.push_back(nums2[end]);
   break;
}
if(end==n-1)ans.push_back(-1);
        end++;
        } 
    }

     
     else{
        ans.push_back(-1);
     }
    }
    return ans;
    }
};
