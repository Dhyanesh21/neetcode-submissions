class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int comp = 0;
        int n=nums.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            comp = target - nums[i];
            if(hash.find(comp) != hash.end()){
                return {hash[comp],i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
