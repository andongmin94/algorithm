#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    if (isdigit(s[0])) answer += s[0];
    else answer += toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == ' ' && !isdigit(s[i]))
            answer += toupper(s[i]);
        else answer += tolower(s[i]);
    }
    return answer;
}