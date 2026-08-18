class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int curr=0;
        unordered_set<char>st;
        int n= s.size();
        int left =0;
        for(int right=0;right<n;right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            
            curr=(right-left)+1;
            ans=max(ans,curr);
        }
        return ans;
        
    }
};
