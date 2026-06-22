class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = INT_MIN;
        for(int i = 0;i<n;i++){
            int area = 0;
            for(int j=i+1;j<n;j++){
                area = (j-i) * min(heights[i],heights[j]);
                maxarea = max(area,maxarea);
            } 
        }
        return maxarea;
    }
};
