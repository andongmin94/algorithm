#include <bits/stdc++.h>

using namespace std;

int B[100000]={0,};

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
        
        for (auto e : s)
        {
            if(e == '(' || e == '[')
                stack.push(e);
            else if (stack.empty())
            {
                if (e == ')' || e == ']')
                    stack.push(e);
            }
            else if(!(stack.empty()))
            {
                if((e == ')' && stack.top() == '(') || (e == ']' && stack.top() == '['))
                    stack.pop();
                else if (e == ')' || e == ']')
                    stack.push(e);
            }
        }
        
        if (stack.empty())
            cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}
