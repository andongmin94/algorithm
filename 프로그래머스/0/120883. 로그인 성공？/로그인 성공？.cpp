#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    //
    for (const auto& e : db)
    {
        if (e[0] == id_pw[0])
        {
            if (e[1] == id_pw[1])
                return "login";
            else answer = "wrong pw";
        }
    }
    if (answer == "") return "fail";
    //
    return answer;
}