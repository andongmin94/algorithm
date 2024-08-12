#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    //
    for (int i = 0; i <= myString.length() - pat.length(); i++)
    {
        if (myString[i] == pat[0])
        {
            bool check = true;
            for (int j = 0; j < pat.length(); j++)
                if (myString[i + j] != pat[j]) check = false;
            if (check)
            {
                answer = "";
                for (int j = 0; j < i + pat.length(); j++)
                {
                    answer += myString[j];
                }
            }
        }
    }
    //
    return answer;
}