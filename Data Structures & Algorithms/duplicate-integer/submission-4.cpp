class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int x:nums){
            hash[x]++;
        }
        for(auto it:hash){
            if(it.second > 1){
                return true;
            }
        }
        return false;

        
    }
};