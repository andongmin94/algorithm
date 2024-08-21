#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    //
    for (const auto& e : picture)
    {
        string s = "";
        for (const auto& e_ : e)
        {
            for (int i = 0; i < k; i++)
                s += e_;
        }
        for (int i = 0; i < k; i++)
            answer.push_back(s);
    }
    //
    return answer;
}