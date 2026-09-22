class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r;
        queue<int>d;
        int n = senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R')r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()){
                int b=r.front();
                r.pop();
                d.pop();
                r.push(b+n);
            }
            else {
                int b=d.front();
                r.pop();
                d.pop();
                d.push(b+n);
            }
        }
        if(!r.empty()) return "Radiant";
        else return "Dire";

    }
};