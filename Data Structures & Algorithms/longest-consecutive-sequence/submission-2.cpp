class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int largest = 1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int currentNum=it;
                while(st.find(currentNum+1) != st.end()){
                    currentNum += 1;
                    cnt++;
                }
                largest = max(cnt,largest);
            }
        }
        return largest;
    }
};
