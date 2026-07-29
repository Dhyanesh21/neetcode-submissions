class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int x:nums){
            hash[x]++; 
        }
        for(auto it:hash){
            if(it.second > n/2){
                return it.first;
            }
        }
    }
};