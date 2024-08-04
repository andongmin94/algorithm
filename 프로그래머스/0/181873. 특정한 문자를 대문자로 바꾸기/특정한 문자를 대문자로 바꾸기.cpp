#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    //
    for (auto& e : my_string)
    {
        if (e == alp[0]) answer += e - 32;
        else answer += e;
    }
    //
    return answer;
}