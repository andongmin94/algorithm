#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    //
    int x1 = dots[0][0], y1 = dots[0][1];
    int x2 = dots[1][0], y2 = dots[1][1];
    int x3 = dots[2][0], y3 = dots[2][1];
    int x4 = dots[3][0], y4 = dots[3][1];
    
    if (x1 == x2)
    {
        if (y1 == y3)
            answer = abs(x3 - x1) * abs(y2 - y1);
        else answer = abs(x4 - x1) * abs(y2 - y1);
    }
    if (x1 == x3)
    {
        if (y1 == y2)
            answer = abs(x2 - x1) * abs(y3 - y1);
        else answer = abs(x4 - x1) * abs(y3 - y1);
    }
    if (x1 == x4)
    {
        if (y1 == y2)
            answer = abs(x2 - x1) * abs(y4 - y1);
        else answer = abs(x3 - x1) * abs(y4 - y1);
    }
    //
    return answer;
}