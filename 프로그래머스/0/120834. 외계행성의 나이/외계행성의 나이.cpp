#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    //
    string s = to_string(age);
    for (const auto& e : s)
        answer += e + 'a' - '0';
    //
    return answer;
}