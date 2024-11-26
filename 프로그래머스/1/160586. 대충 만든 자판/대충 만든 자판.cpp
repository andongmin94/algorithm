#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    //
    for (auto e : targets)
    {
        int sum = 0;
        bool sum_s = true;
        for (auto e_ : e)
        {
            vector<int> v;
            for (auto a : keymap)
            {
                int cnt = 0;
                for (int i = 0; i < a.length(); i++)
                {
                    if (a[i] == e_)
                    {
                        cnt = i + 1;
                        break;
                    }
                }
                if (cnt) v.push_back(cnt);
            }
            sort(v.begin(), v.end());
            if (!v.empty()) sum += v[0];
            else sum_s = false;
        }
        if (sum && sum_s) answer.push_back(sum);
        else answer.push_back(-1);
    }
    //
    return answer;
}