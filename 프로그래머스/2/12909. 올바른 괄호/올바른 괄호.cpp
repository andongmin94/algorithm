#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    //
    if (s[0] == ')' || s[s.length() - 1] == '(') return false;
    stack<char> v;
    for (auto e : s)
    {
        if (e == '(') v.push(e);
        if (e == ')' && v.top() == '(') v.pop();
    }
    if (!v.empty()) answer = false;
    //
    return answer;
}