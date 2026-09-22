class Solution {
public:
    string predictPartyVictory(string senate) {
        vector<int>r;
        vector<int>d;
        int n = senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R')r.push_back(i);
            else d.push_back(i);
        }
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()){
                int b=r.front();
                r.erase(r.begin());
                d.erase(d.begin());
                r.push_back(b+n);
            }
            else {
                int b=d.front();
                r.erase(r.begin());
                d.erase(d.begin());
                d.push_back(b+n);
            }
        }
        if(!r.empty()) return "Radiant";
        else return "Dire";

    }
};