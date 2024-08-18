#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    //
    for (const auto& e : queries)
    {
        int a = e[0], b = e[1];
        while (a < b)
        {
            swap(my_string[a], my_string[b]);
            a++;
            b--;
        }
    }
    answer = my_string;
    //
    return answer;
}