#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    //
    answer.push_back(x);
    while(answer.size() < n)
    {
        answer.push_back(x + answer[answer.size() - 1]);
    }
    //
    return answer;
}