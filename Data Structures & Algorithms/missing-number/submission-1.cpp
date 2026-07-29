class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1 = n;
        for(int i=0;i<n;i++){
            xor1 ^= i ^ nums[i];
        }
        return xor1;
    }
};
