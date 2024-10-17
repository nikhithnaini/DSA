class Solution {
public:
    int maximumSwap(int num) {
        string s1 = to_string(num);
        int n = s1.size();
        vector<int> rightMaxIndex(n);
        
        // Track the index of the largest digit from the right for each position
        rightMaxIndex[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; --i) {
            if (s1[i] > s1[rightMaxIndex[i + 1]]) {
                rightMaxIndex[i] = i;
            } else {
                rightMaxIndex[i] = rightMaxIndex[i + 1];
            }
        }
        
        // Find the first place where swapping increases the number
        for (int i = 0; i < n; ++i) {
            if (s1[i] < s1[rightMaxIndex[i]]) {
                swap(s1[i], s1[rightMaxIndex[i]]);
                break;
            }
        }
        
        return stoi(s1);
    }
};
