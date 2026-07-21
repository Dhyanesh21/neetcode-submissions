class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> hash;
        for(char ch:s){
            hash[ch]++;
        }
        for(char ch:t){
            hash[ch]--;
        }
        for(auto it:hash){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};
