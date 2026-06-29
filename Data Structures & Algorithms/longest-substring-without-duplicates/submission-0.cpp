class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        for(int i=0;i<s.size();i++){
            vector<int> hash(256,0);
            for(int j=i;j<s.size();j++){
                if(hash[s[j]] == 1) break;
                int length = j-i+1;
                maxLength = max(maxLength,length);
                hash[s[j]] = 1;
            }
        }
        return maxLength;
    }
};
