class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       int n=s.length();
       for(int i=0;i<n;i++){
        int c=s[i];
        if(c == '(' || c == '{' || c=='[') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            if((c == ')' && st.top() !='(') || (c =='}' && st.top()!='{') || (c==']' && st.top()!='[')) return false;
            st.pop();
        }
       }
       if(st.size()==0) return true;
       else return false;
    }
};