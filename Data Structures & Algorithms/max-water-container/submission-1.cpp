class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = INT_MIN;
        int left = 0;
        int right = n-1;
        while(left<right){
            int width = right - left;
            int area = width * min(heights[left],heights[right]);
            maxarea = max(area,maxarea);
            if(heights[left] < heights[right]) left++;
            else right--;
        }
        return maxarea;
            }
};
