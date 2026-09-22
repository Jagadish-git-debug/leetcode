class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int ans =0;
        int b = t[k];
        int c=0;
        for(int i=0;i<t.size();i++){
            if(i>k && t[i] >= t[k]) c++;
            if(t[i] < b) ans += t[i];
            else ans+=b;
        }
        return ans - c;
    }
};