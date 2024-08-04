#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    //
    for (auto& e : myString)
        e = tolower(e);
    for (auto& e : pat)
        e = tolower(e);
    
    for (int i = 0; i <= myString.length() - pat.length(); i++)
    {
        if (myString.length() < pat.length()) break;
        if (myString[i] == pat[0])
        {
            bool check = true;
            for (int j = 0; j < pat.length(); j++)
            {
                if (myString[i + j] != pat[j]) check = false;
            }
            if (check)
            {
                answer = 1;
                break;
            }
        }
    }
    //
    return answer;
}