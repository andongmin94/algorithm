#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    //
    int count_0 = 0;
    int cnt = 0;
    for (auto e : lottos)
    {
        for (auto e_ : win_nums)
            if (e == e_) cnt++;
        if (!e) count_0++;
    }
    if (!count_0 && !cnt) count_0++;
    answer.push_back(7 - (cnt + count_0));
    if (!cnt) cnt++;
    answer.push_back(7 - cnt);
    //
    return answer;
}