class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxP = 0;
        for(int p:prices){
            mini = min(mini,p);
            maxP = max(maxP,p-mini);
        }
        return maxP;

    }
};
