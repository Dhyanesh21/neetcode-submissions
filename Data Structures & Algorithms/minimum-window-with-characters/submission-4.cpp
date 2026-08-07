class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1 < n2) return "";
        vector<int> window(128,0);
        vector<int> need(128,0);
        for(int i=0;i<n2;i++){
            need[t[i]]++;
        }
        int requiredDistinct = 0;
        for(int i=0;i<128;i++){
            if(need[i]>0) {
                requiredDistinct++;
        }
        }

        int formed = 0;
        int l = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int r=0;r<n1;r++){
            char c = s[r];
            window[c]++;

            if(need[c] > 0 && window[c] == need[c]) formed++;

            while(formed == requiredDistinct){
                if(r - l + 1 < minLen){
                    minLen = r-l+1;
                    start = l;
                }

                char leftChar = s[l];
                window[leftChar]--;

                if(need[leftChar] > 0 && window[leftChar] < need[leftChar]){
                    formed--;
                }
                l++;
            }
        }
        if(minLen == INT_MAX)
        {
            return "";
        }
        return s.substr(start, minLen);
        


    }
};
