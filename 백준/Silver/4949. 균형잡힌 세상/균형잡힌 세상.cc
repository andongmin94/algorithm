#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        string string;
        stack<char> s;
        getline(cin, string);
        if (string[0] == '.') break;
        
        bool isValid = true;
        
        for (auto e : string)
        {
            if(e == '(' || e == '[') s.push(e);
            else if (e == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    isValid = !isValid;
                    break;
                }
                s.pop();
            }
            else if (e == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    isValid = !isValid;
                    break;
                }
                s.pop();
            }
        }
        if (isValid && s.empty())  cout << "yes\n";
        else cout << "no\n";
    }
}