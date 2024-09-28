#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    //
    int min = 10000;
    for (auto e : arr)
        if (e < min) min = e;
    for (auto e : arr)
        if (e != min) answer.push_back(e);
    if (answer.empty()) answer.push_back(-1);
    //
    return answer;
}