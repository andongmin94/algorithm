#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    //
    string s = "";
    for (int i = 0; i < my_str.length(); i++)
    {
        if (i != 0 && i % n == 0)
        {
            answer.push_back(s);
            s = "";
            s += my_str[i];
        }
        else s += my_str[i];
    }
    if (s != "") answer.push_back(s);
    //
    return answer;
}