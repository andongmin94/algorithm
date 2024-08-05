#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    //
    for (const auto& e : strlist)
    {
        answer.push_back(e.length());
    }
    //
    return answer;
}