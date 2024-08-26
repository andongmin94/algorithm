#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    //
    vector<int> v;
    for (int i = 0; i < rank.size(); i++)
        if (attendance[i]) v.push_back(rank[i]);
    sort(v.begin(), v.end());
    for (int i = 0; i < rank.size(); i++)
    {
        if (rank[i] == v[0]) answer += 10000 * i;
        if (rank[i] == v[1]) answer += 100 * i;
        if (rank[i] == v[2]) answer += i;
    }
    //
    return answer;
}