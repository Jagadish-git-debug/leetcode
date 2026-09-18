class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>a;
        int j=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            while(j<s.size() && a[s[j]]!=1){
                a[s[j]]++;
                j++;
            }
            b=max(b,j-i);
            a[s[i]]--;
        }
        return b;
    }
};