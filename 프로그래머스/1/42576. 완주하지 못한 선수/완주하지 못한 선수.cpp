#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    //
    map<string, int> m;
    for (auto e : participant)
        m[e]++;
    for (auto e : completion)
        m[e]--;
    for (auto e : m)
        if (e.second) answer += e.first;
    //
    return answer;
}