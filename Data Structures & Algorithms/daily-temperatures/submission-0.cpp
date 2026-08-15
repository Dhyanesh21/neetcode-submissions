class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stack;
        vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            int t = temperatures[i];
            while(!stack.empty() && t > stack.top().first){
                auto [temp,index] = stack.top();
                stack.pop();
                ans[index] = i-index;
            }
            stack.push({t,i});
        }
        return ans;
    }
};
