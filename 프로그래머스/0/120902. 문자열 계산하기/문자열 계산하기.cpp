#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    //
    string s = "", a = "";

    for (const auto& e : my_string)
    {
        if (isdigit(e)) s += e;
        if (e == ' ')
        {
            if (s != "" && (a == "+" || a == ""))
            {
                answer += stoi(s);
                s = "";
            }
            if (s != "" && a == "-")
            {
                answer -= stoi(s);
                s = "";
            }
        }
        if (e == '+') a = "+";
        if (e == '-') a = "-";
    }
    if (s != "" && a == "+") answer += stoi(s);
    if (s != "" && a == "-") answer -= stoi(s);
    //
    return answer;
}