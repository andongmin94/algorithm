#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    //
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {   
        if (j & 1)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                answer += s[i];
                j++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += s[i] - 'A' + 'a';
                j++;
            }
            else
            {
                answer += s[i];
                j = 0;
            }
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                answer += s[i] - 'a' + 'A';
                j++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += s[i];
                j++;
            }
            else
            {
                answer += s[i];
                j = 0;
            }
        }
    }
    //
    return answer;
}