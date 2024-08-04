#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    //
    for (auto& e : my_string)
    {
        if ('0' <= e && e <= '9')
            answer += static_cast<int>(e - '0');
    }
    //
    return answer;
}