#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer = "";
    //
    for (const auto& e : my_string)
        answer += tolower(e);
    sort(answer.begin(), answer.end());
    //
    return answer;
}