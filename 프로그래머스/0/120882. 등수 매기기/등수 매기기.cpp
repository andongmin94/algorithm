#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    //
    vector<double> v;
    for (const auto& e : score)
        v.push_back((double)(e[0] + e[1]) / 2);
    for (int i = 0; i < v.size(); i++)
    {
        int k = 1;
        for (int j = 0; j < v.size(); j++)
            if (v[i] < v[j]) k++;
        answer.push_back(k);
    }
    //
    return answer;
}