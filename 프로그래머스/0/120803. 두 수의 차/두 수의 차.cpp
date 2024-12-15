#include <bits/stdc++.h>

using namespace std;

int solution(int num1, int num2) {
    function<int()> a = [&]() -> int { return num1 - num2; };
    return a();
}