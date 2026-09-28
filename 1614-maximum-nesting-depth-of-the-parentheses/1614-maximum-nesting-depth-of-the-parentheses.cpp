class Solution {
public:
    int maxDepth(string s) {
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') a++;
            else if(s[i]==')') a--;
            if(a>c) c=a;
        }
        return c;
    }
};