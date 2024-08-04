#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    //
    for (auto& e : my_string)
    {
        if ('a' <= e && e <= 'z')
            answer += static_cast<char>(e - 32);
        else answer += static_cast<char>(e + 32);
    }
    //
    return answer;
}