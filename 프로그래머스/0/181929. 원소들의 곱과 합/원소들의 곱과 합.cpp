#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //
    int multiple = 1;
    int pow_ = 0;
    for (auto& e : num_list)
    {
        multiple *= e;
        pow_ += e;
    }
    if (multiple < pow(pow_, 2)) answer++;
    //
    return answer;
}