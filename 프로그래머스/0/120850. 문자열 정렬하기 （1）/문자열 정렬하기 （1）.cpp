#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    //
    for (const auto& e : my_string)
    {
        if (isdigit(e)) answer.push_back((int)(e - '0'));
    }
    sort(answer.begin(), answer.end());
    //
    return answer;
}