#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string string;
    cin >> string;
    stack<char> s;
    int cnt = 0;
    
    for (int i = 0; i < string.size(); i++)
    {
        if (string[i] == '(') s.push('(');
        else if (!s.empty() && string[i-1] == '(')
        {
            s.pop();
            cnt += s.size();
        }
        else
        {
            s.pop();
            cnt += 1;
        }
    }

    cout << cnt;
}
