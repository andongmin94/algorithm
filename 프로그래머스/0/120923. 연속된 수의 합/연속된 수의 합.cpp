#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    //
    int n = total / num;
    answer.push_back(n);
    int i = 1;
    while(answer.size() < num)
    {
        answer.push_back(n + i);
        if (answer.size() == num) break;
        answer.push_back(n - i);
        i++;
    }
    sort(answer.begin(), answer.end());
    //
    return answer;
}