class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = INT_MIN;
        int prefix = 1,sufix=1;
        for(int i = 0;i<nums.size();i++){
            if(prefix ==0) prefix = 1;
            else if(sufix ==0) sufix = 1;

            prefix = prefix*nums[i];
            sufix = sufix*nums[nums.size()-i-1];

            maxP = max(maxP,max(prefix,sufix));
        }
        return maxP;
        
    }
};
