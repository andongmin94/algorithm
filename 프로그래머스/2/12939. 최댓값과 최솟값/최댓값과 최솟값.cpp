#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    //
    string s2 = "";
    vector<int> v;
    for (auto e : s)
    {
        if (e == ' ')
        {
            v.push_back(stoi(s2));
            s2 = "";
        }
        else s2 += e;
    }
    v.push_back(stoi(s2));
    sort(v.begin(), v.end());
    answer += to_string(v.front());
    answer += " ";
    answer += to_string(v.back());
    //
    return answer;
}