#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    //
    int idx = 0;
    for (auto& e : strArr)
    {
        for (auto& e2 : e)
        {
            if (idx % 2) e2 = toupper(e2);
            else e2 = tolower(e2);
        }
        answer.push_back(e);
        idx++;
    }
    //
    return answer;
}