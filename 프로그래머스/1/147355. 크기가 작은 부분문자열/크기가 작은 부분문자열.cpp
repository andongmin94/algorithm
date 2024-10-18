#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    //
    int n = p.length();
    for (int i = 0; i <= t.length() - n; i++)
    {
        string a = "";
        for (int j = i; j < i + n; j++)
        {
            a += t[j];
        }
        if (stoll(a) <= stoll(p)) answer++;
    }
    //
    return answer;
}