#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    //
    vector<int> v;
    for (auto e : ingredient)
    {
        v.push_back(e);
        if (v.size() > 3 && v.back() == 1)
        {
            if (*(v.end() - 1) != 1) continue;
            if (*(v.end() - 2) != 3) continue;
            if (*(v.end() - 3) != 2) continue;
            if (*(v.end() - 4) != 1) continue;
            v.pop_back();
            v.pop_back();
            v.pop_back();
            v.pop_back();
            answer++;
        }
    }
    //
    return answer;
}