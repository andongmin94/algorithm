#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    //
    for(const auto& e : myString)
    {
        if (e == 'a') answer += 'A';
        else if ('A' < e && e <= 'Z') answer += e - 'A' + 'a';
        else answer += e;
    }
    //
    return answer;
}