#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    //
    for (auto e : s)
    {
        if (e >= 'a' && e <= 'z')
            answer += (e + n - 'a') % 26 + 'a';
        if (e >= 'A' && e <= 'Z')
            answer += (e + n - 'A') % 26 + 'A';
        if (e == ' ') answer += e;
    }
    //
    return answer;
}