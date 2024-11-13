#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    //
    int a = 0, b = 0;
    for (auto e : sizes)
    {
        if (e[0] < e[1]) swap(e[0], e[1]);
        if (a < e[0]) a = e[0];
        if (b < e[1]) b = e[1];
    }
    answer = a * b;
    //
    return answer;
}