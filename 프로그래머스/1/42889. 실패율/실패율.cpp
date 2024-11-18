#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    //
    vector<pair<double,int>> failureRates;
    int len = stages.size();
    
    for (int i = 1; i <= N; i++)
    {
        int cnt = 0;
        for (auto e : stages)
            if (e == i) cnt++;
        if (len == 0) { // 도달한 유저가 없는 경우 실패율 0
            failureRates.push_back({0.0, i});
        } else {
            failureRates.push_back({static_cast<double>(cnt) / len, i});
        }
        len -= cnt;
    }

    sort(failureRates.begin(), failureRates.end(), [](pair<double, int> a, pair<double, int> b)
    {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });

    for (auto p : failureRates)
    {
        answer.push_back(p.second);
    }
    //
    return answer;
}