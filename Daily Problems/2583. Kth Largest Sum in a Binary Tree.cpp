/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode*root,map<int,long long>&m,int level){
        queue<pair<TreeNode*,int>>q;
        if(root!=NULL)q.push({root,level});
        while(!q.empty()){
            auto a =q.front();
            q.pop();
            TreeNode*temp=a.first;
            int val = a.second;
            m[val]=m[val]+temp->val;
            if(temp->left)q.push({temp->left,val+1});
            if(temp->right)q.push({temp->right,val+1});

        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long ans;
        vector<long long>sum;
        map<int,long long>m;
        solve(root,m,0);
        for(auto it:m){
            sum.push_back(it.second);
        }
        sort(sum.begin(),sum.end());
        int n=sum.size();
        if(n==0)return 0;
        if (k > n) {
            return -1;  // Invalid k, return -1 or handle it accordingly
        }

        return sum[n-k];


    }
};
