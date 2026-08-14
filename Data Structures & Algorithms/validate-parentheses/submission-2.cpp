class Solution {
public:
    bool isValid(string s) {
        stack<char> stackk;
        unordered_map<char,char> paranthesis = {
            {'}','{'},
            {']','['},
            {')','('}
        };

        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                stackk.push(c);
            }
            else {
            if(stackk.empty() || stackk.top() != paranthesis[c]){
                return false;
            }

            stackk.pop();
        }
        }
        return stackk.empty();        
    }
};
