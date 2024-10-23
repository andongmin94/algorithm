#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    //
    string s_ = "";
    string list[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (auto e : s)
    {
        if (!isdigit(e)) s_ += e;
        else
        {
            answer *= 10;
            answer += e - '0';
        }
        for (int i = 0; i < 10; i++)
        {
            if (list[i] == s_)
            {
                answer *= 10;
                answer += i;
                s_ = "";
            }
        }
    }
    //
    return answer;
}