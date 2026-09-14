class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> hmap = {
            make_pair(')', '('),
            make_pair(']', '['),
            make_pair('}', '{')
        };

        for (char c : s){
            if(hmap.count(c)){
                if(!stack.empty() && stack.top() == hmap[c])
                stack.pop();
                else{
                    return false;
                }
            }
            else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
