class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26);
        vector<bool> seen(26,false);
        stack<char> st;

        // 1. Store last occurrence
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }

        // 2. Traverse string
        for(int i=0;i<s.size();i++){
            char ch=s[i];

            // if already in stack → skip
            if(seen[ch-'a']) continue;

            // 3. Remove bigger elements if they appear later
            while(!st.empty() && st.top()>ch && last[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();
            }

            // 4. Push current
            st.push(ch);
            seen[ch-'a']=true;
        }

        // 5. Make answer string
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }

        return ans;
    }
};
