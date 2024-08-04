#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    //
    string s = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        if (my_string[i] == ' ')
        {
            if (s != "")
            {
                answer.push_back(s);
                s = "";
            }
        }
        else s += my_string[i];
    }
    answer.push_back(s);
    //
    return answer;
}