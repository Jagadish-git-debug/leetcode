class Solution {
public:
    bool isValid(string s) {
        bool flag = true;
        int i;
	stack<char>st;
	for(i=0;i<s.size();i++){
		if(s[i]=='(' || s[i]== '{' || s[i]=='['){
			st.push(s[i]);
		}
		else{
			if(s[i]==')' && !st.empty() && st.top()=='('){
				st.pop();
			}
			else if(s[i]=='}' && !st.empty() &&st.top()=='{'){
				st.pop();
			}
			else if(s[i]==']'  && !st.empty() &&st.top()=='['){
				st.pop();
			}
			else{
				flag=false;
				break;
			}
		}
	} 
    if(!st.empty() || flag == false){
        return false;

	}
	else{
		return true;
	}
        
    }
};