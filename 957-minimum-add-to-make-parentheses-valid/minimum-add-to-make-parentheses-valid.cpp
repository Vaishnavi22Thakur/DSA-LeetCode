class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int n=s.length();
        int extra=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()) st.pop();
                else extra++;
            }
        }
        return st.size()+extra;
    }
};