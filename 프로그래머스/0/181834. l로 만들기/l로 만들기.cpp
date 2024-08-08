#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    //
    for (const auto& e : myString)
    {
        if (e < 'l') answer += 'l';
        else answer += e;   
    }
    //
    return answer;
}