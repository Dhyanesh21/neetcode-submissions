class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26] = {0};
        if(s.length() != t.length()){
            return false;
        }
        for(char s:s){
            hash[s - 'a']++;
        }
        for(char t:t){
            hash[t - 'a']--;
        }
        for(int x:hash){
            if(x > 0){
                return false;
            }
        }
        return true;
    }
};
