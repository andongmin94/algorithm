#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    //
    string s_ = "";
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9' || s[i] == '-') s_ += s[i];
        else if (s_ != "" && s[i] == ' ')
        {
            v = stoi(s_);
            answer += v;
            s_ = "";
        }
        else if (s[i] == 'Z') answer -= v;
    }
    if (s_ != "")
    {
        v = stoi(s_);
        answer += v;
    }
    //
    return answer;
}