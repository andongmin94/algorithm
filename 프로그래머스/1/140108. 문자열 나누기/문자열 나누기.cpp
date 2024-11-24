#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    //
    int same = 0;
    int differ = 0;
    char c = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c) same++;
        else differ++;
        if (same == differ)
        {
            answer++;
            same = 0;
            differ = 0;
            c = s[i + 1];
        }
    }
    if (c == s[s.length() - 1] || same && differ) answer++;
    //
    return answer;
}