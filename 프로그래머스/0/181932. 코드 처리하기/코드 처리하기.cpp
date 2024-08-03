#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    //
    int mode = 0;
    for (int idx = 0; idx < code.length(); idx++)
    {
        if (mode)
        {
            if (code[idx] != '1' && idx % 2) answer += code[idx];
            if (code[idx] == '1') mode = 0;
        }
        else
        {
            if (code[idx] != '1' && !(idx % 2)) answer += code[idx];
            if (code[idx] == '1') mode = 1;
        }
    }
    if (answer == "") return "EMPTY";
    //
    return answer;
}