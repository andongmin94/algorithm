#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    //
    string s = "";
    for (const auto& e : my_string)
    {
        if (isdigit(e)) s += e;
        else if (s != "")
        {
            answer += stoi(s);
            s = "";
        }
    }
    if (s != "") answer += stoi(s);
    //
    return answer;
}