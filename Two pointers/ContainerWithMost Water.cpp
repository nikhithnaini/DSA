class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int h=0;
        int area=0;
        
        int max_area=INT_MIN;
        while(left<right){
            h=min(height[left],height[right]);
            area=h*(right-left);
            max_area=max(max_area,area);
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right])right--;
            else{
                right--;
            }
        }
        return max_area;
    }
};
