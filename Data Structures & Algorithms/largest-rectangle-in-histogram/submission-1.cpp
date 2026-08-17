class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        stack<int> stack;
        for(int i=0;i<=n;i++){
            int currHeight = (i==n) ? 0 : heights[i];

            while(!stack.empty() && heights[stack.top()] > currHeight){
                int height = heights[stack.top()];
                stack.pop();

                int width;
                if(stack.empty()){
                    width = i;
                }
                else{
                    width = i - stack.top() - 1;
                }
                int area = height * width;
                maxArea = max(maxArea,area);
            } 
            if(i<n) stack.push(i);
        }
        return maxArea;
    }
};
