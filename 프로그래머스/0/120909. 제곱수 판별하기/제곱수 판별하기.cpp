#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    //
    if (static_cast<int>(sqrt(n)) * static_cast<int>(sqrt(n)) == n) answer = 1;
    else answer = 2;
    //
    return answer;
}