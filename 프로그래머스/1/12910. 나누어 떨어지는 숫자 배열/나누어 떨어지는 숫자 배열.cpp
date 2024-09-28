#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    //
    for(auto e : arr)
        if (!(e % divisor)) answer.push_back(e);
    if (answer.empty()) answer.push_back(-1);
    else sort(answer.begin(), answer.end());
    //
    return answer;
}