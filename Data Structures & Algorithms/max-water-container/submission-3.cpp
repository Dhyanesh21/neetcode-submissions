class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxArea = INT_MIN;
        while(left < right){
            int width = right - left;
            int area = width * min(heights[left],heights[right]);
            maxArea = max(area,maxArea);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};
