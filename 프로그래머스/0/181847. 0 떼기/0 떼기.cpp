#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    //
    bool check = false;
    for(const auto& e : n_str)
    {
        if (e != '0') check = true;
        if (check) answer += e;
    }
    //
    return answer;
}