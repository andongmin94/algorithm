#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    //
    for (const auto& e : intStrs)
    {
        string str = "";
        for (int i = s; i < s + l; i++)
            str += e[i];
        if (k < stoi(str)) answer.push_back(stoi(str));
    }
    //
    return answer;
}