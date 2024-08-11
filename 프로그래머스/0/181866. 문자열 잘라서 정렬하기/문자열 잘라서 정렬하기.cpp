#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    //
    string s = "";
    for (const auto& e : myString)
    {
        if (e == 'x' && s != "")
        {
            answer.push_back(s);
            s = "";
        }
        else if (e != 'x') s += e;
    }
    if (s != "") answer.push_back(s);
    sort(answer.begin(), answer.end());
    //
    return answer;
}