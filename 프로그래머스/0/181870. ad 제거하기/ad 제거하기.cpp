#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    //
    for (const auto& e : strArr)
    {
        bool check = true;
        for (int i = 0; i < e.length() - 1; i++)
        {
            if (e[i] == 'a' && e[i + 1] == 'd') check = false;
        }
        if (check) answer.push_back(e);
    }
    //
    return answer;
}