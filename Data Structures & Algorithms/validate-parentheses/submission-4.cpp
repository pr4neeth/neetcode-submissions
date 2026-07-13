class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == ']' || s[0] == '}' || s.length()==1)
            return false;
        stack<char> st;
        st.push(s[0]);
        int i = 1;
        while(i<s.length())
        {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{')
                st.push(s[i]);
            else if(s[i] == ']' && !st.empty() && st.top() == '[')
                st.pop();
            else if(s[i] == ')' && !st.empty() && st.top() == '(')
                st.pop();
            else if(s[i] == '}' && !st.empty() && st.top() == '{')
                st.pop();
            else
                return false;
            i++;
        }
        if(st.empty())
            return true;
        return false;
    }
};
