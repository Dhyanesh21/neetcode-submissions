class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<char> freqs1(26,0);
        int n = s1.size();
        vector<char> freqs2(26,0);
        int m = s2.size();

        for(int i=0;i<n;i++){
            freqs1[s1[i] - 'a']++;
            freqs2[s2[i] - 'a']++;
        }
        int matches = 0;
        for(int i=0;i<26;i++){
            if(freqs1[i] == freqs2[i]){
                matches++;
            }
        }

        int l=0;
        for(int r=n;r<m;r++){
            if(matches == 26){
                return true;
            }

            int index = s2[r] - 'a';
            freqs2[index]++;
            if(freqs1[index] == freqs2[index]){
                matches++;
            }
            else if(freqs1[index]+1 == freqs2[index]){
                matches--;
            }
            index = s2[l] - 'a';
            freqs2[index]--;
            if(freqs1[index] == freqs2[index]) matches++;
            else if(freqs1[index] - 1 == freqs2[index]){
                matches--;
            }
            l++;
        }
        return matches == 26;




        
    }
};
