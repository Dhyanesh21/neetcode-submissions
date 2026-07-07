class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>hash;
        for(char x:s){
            hash[x]++;
        }
        for(char y:t){
            hash[y]--;
        }
        for(auto &it:hash){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
