class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<char> h1(26,0);
        int n = s1.size();
        vector<char> h2(26,0);
        int m = s2.size();

        for(int i=0;i<n;i++){
            h1[s1[i] - 'a']++;
            h2[s2[i] - 'a']++;
        }

        if(h1==h2) return true;

        int l=0;
        for(int r=n;r<m;r++){
            h2[s2[r]-'a']++;
            h2[s2[l]-'a']--;
            l++;

            if(h1 == h2) return true;


        }
        return false;
    }
};
