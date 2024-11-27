class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack;

        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case '(':
                    stack.push(')');
                    break;

                case '{':
                    stack.push('}');
                    break;

                case '[':
                    stack.push(']');
                    break;

                case ')':
                    if(!stack.empty() && stack.top() == ')'){
                        stack.pop();
                    }
                    else
                        return false;
                    break;
                
                case '}':
                    if(!stack.empty() && stack.top() == '}'){
                        stack.pop();
                    }
                    else
                        return false;
                    break;

                case ']':
                    if(!stack.empty() && stack.top() == ']'){
                        stack.pop();
                    }
                    else
                        return false;
                    break;

            }     
        }
        if(stack.empty() == true)
            return true;
        else
            return false;
    }
};