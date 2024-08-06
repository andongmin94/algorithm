#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    //
    for (const auto& e : str_list)
    {
        bool check = true;
        for (int i = 0; i < e.length(); i++)
        {
            if (e[i] == ex[0])
            {
                int cnt = 0;
                for (int j = 0; j < ex.length(); j++)
                {
                    if (e[i + j] == ex[j]) cnt++;
                }
                if (cnt == ex.length()) check = false;
            }
        }
        if (check) answer += e;
    }
    //
    return answer;
}