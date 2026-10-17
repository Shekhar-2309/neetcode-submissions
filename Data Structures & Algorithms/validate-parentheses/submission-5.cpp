class Solution {
public:
    stack<char> st;
    bool isValid(string s) {
        unordered_map<char, char> mp = {
    {')', '('},
    {']', '['},
    {'}', '{'}
    };
    for(char c:s){
        if (c == '(' || c == '[' || c == '{') {
        st.push(c);
    }
    else {
        if (!st.empty() && st.top() == mp[c]) {
            st.pop();
        }
        else {
            return false;
        }
        
    }
    }
    return st.empty();
   
    }
};
