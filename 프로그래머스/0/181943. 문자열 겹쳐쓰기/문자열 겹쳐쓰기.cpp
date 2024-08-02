#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    //
    for (int i = 0; i < my_string.length(); i++)
    {
        if (i < s) answer += my_string[i];
        if (s <= i && i < s + overwrite_string.length()) answer += overwrite_string[i - s];
        if (i >= s + overwrite_string.length()) answer += my_string[i];
    }
    //
    return answer;
}