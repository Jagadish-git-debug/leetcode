class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                mp[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            mp[nums2[st.top()]]=-1;
            st.pop();
        }
        vector<int>a;
        for(int i=0;i<nums1.size();i++){
            a.push_back(mp[nums1[i]]);
        }
        return a;
    }
};