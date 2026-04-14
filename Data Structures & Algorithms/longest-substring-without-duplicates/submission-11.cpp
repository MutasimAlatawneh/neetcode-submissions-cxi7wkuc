class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
        unordered_set<char>st;
        int ans=0;
        int left=0,right=0;
        
        while(right<s.size()){
             
                 
                while(st.count(s[right])){
                st.erase(s[left]);
                left++;
                }
             
            st.insert(s[right]);
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
