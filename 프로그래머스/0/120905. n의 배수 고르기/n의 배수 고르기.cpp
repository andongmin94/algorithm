#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    //
    for (auto& e : numlist)
    {
        if (!(e % n)) answer.push_back(e);
    }
    //
    return answer;
}