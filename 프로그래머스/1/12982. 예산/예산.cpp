#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    //
    sort(d.begin(), d.end());
    while(budget > 0 && answer < d.size())
    {
        if (budget - d[answer] >= 0)
        {
            budget -= d[answer];
            answer++;
        }
        else break;
    }
    //
    return answer;
}