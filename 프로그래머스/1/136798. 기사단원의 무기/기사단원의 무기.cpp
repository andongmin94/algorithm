#include <bits/stdc++.h>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    //
    vector<int> v;
    for (int i = 1; i <= number; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                cnt++;
                if (pow(j, 2) != i) cnt++;   
            }
            if (cnt == limit + 1) break;   
        }
        v.push_back(cnt);
    }
    for (auto e : v)
    {
        if (limit < e) answer += power;
        else answer += e;
    }
    //
    return answer;
}