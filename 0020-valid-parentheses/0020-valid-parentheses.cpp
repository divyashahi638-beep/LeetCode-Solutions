
class Solution {
public:
      bool isValid(string s) {
        string temp = "";
        int i = 0;

        while (i < s.size()) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                temp += s[i];
            }
            else {
                if (temp.empty())
                    return false;

                int j = temp.size() - 1;

                if (s[i] == ')' && temp[j] != '(')
                    return false;
                else if (s[i] == '}' && temp[j] != '{')
                    return false;
                else if (s[i] == ']' && temp[j] != '[')
                    return false;

                temp.pop_back();
            }

            i++;
        }

        return temp.empty();
    }
};
