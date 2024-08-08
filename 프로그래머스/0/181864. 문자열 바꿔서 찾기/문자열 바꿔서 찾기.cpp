#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    //
    string s = "";
    for (auto e : myString)
    {
        if (e == 'A') s += 'B';
        if (e == 'B') s += 'A';
    }
    
    if (s.length() < pat.length()) return answer;

    for (int i = 0; i <= s.length() - pat.length(); i++)
    {
        if (s[i] == pat[0])
        {
            bool check = true;
            for (int j = 0; j < pat.length(); j++)
            {
                if (s[i + j] != pat[j]) check = false;
            }
            if (check) answer = 1;
        }
    }

    //
    return answer;
}