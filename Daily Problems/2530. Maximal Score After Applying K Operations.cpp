class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>max(nums.begin(),nums.end());
        long long score=0;
        for(int i=0;i<k;i++){
            int num=max.top();
            max.pop();
            score=score+num;
            num=ceil(num/3.0);
        max.push(num);

        }
        return score;

    }
};
