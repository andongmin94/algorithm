#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        string s;
        stack<char> stack;
        getline(cin, s);
        if (s[0] == '.')
            break;
        
        bool isValid = true;
        
        for (auto e : s)
        {
            if(e == '(' || e == '[')
                stack.push(e);
            else if (e == ')')
            {
                if (stack.empty() || stack.top() != '(')
                {
                    isValid = false;
                    break;
                }
                stack.pop();
            }
            else if (e == ']')
            {
                if (stack.empty() || stack.top() != '[')
                {
                    isValid = false;
                    break;
                }
                stack.pop();
            }
        }
        if (isValid == true && stack.empty())
            cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}