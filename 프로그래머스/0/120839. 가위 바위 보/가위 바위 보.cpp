#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    //
    for (const auto& e : rsp)
    {
        if (e == '2') answer += '0';
        if (e == '0') answer += '5';
        if (e == '5') answer += '2';
    }
    //
    return answer;
}