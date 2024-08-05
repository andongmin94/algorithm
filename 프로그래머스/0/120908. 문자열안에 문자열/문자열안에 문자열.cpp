#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    //
    answer = 2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == str2[0])
        {
            bool in = true;
            for (int j = 0; j < str2.length(); j++)
            {
                if (str1[i + j] != str2[j])
                {
                    in = !in;
                    break;
                }
            }
            if (in) answer = 1;
        }
    }
    //
    return answer;
}