
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int count(char c) {
        if (c == '^') return 3;
        else if (c == '*' || c == '/') return 2;
        else if (c == '+' || c == '-') return 1;
        
        return 0;
    }

    bool special(char c) {
        if (c == '^' || c == '-' || c == '*' || c == '/' || c == '+') return true;
        return false;
    }

    string infixToPostfix(string s) {
        // Your code here
        int n = s.length();
        stack<char> a;
        string output;
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                output += s[i];
            }
            else if (s[i] == '(') a.push(s[i]);
            else if (s[i] == ')') {
                while (a.size() != 0 && a.top() != '(') {
                    output += a.top();
                    a.pop();
                }
                if (a.size() != 0 && a.top() == '(') a.pop();
            }
            else if (special(s[i])) {
                while ((a.size() != 0 && count(s[i]) <= count(a.top()))) {
                    output = output + a.top();
                    a.pop();
                }
                a.push(s[i]);
            }
            
        }
        while (a.size() != 0) {
            output += a.top();
            a.pop();
        }
        return output;
    }
};

// Driver code...
