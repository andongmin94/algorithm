#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    //
    vector<int> v;
    if (k < score.size())
    {
        for (int i = 0; i < k; i++)
        {
            answer.push_back(score[i]);
            sort(answer.begin(), answer.end(), greater<int>());
            v.push_back(answer[answer.size() - 1]);
        }

        for (int i = k; i < score.size(); i++)
        {
            sort(answer.begin(), answer.end(), greater<int>());
            if (score[i] > answer[answer.size() - 1])
                answer[answer.size() - 1] = score[i];
            sort(answer.begin(), answer.end(), greater<int>());
            v.push_back(answer[answer.size() - 1]);
        }
        answer = v;
    }
    else
    {
        for (auto e : score)
        {
            v.push_back(e);
            sort(v.begin(), v.end());
            answer.push_back(v.front());
        }
    }
    //
    return answer;
}