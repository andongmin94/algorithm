#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (sqrt(n) == (int)(sqrt(n))) answer = pow(sqrt(n) + 1, 2);
    else answer--;
    return answer;
}