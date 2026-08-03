class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int l = 0;
        int maxFreq = 0;
        int maxWindow = 0;
        for(int r=0;r<s.size();r++){
            count[s[r] - 'A']++;
            maxFreq = max(maxFreq, count[s[r] - 'A']);

            int windowLen = r - l + 1;
            if(windowLen - maxFreq > k){
                count[s[l] - 'A']--;
                l++;
            }

            windowLen = r - l + 1;
            maxWindow = max(maxWindow,windowLen);


        }
        return maxWindow;
        




        

        

        }
};
