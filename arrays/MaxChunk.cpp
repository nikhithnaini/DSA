class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int max = 0; int ans = 0; int n = arr.size();
        for(int i=0; i<n; i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(max==i){
                ans++;
            }
        }
        return ans;
    }
};
