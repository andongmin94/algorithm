#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    //
    for (auto& e : my_string)
    {
        int a = n;
        while(a--)
            answer += e;
    }
    //
    return answer;
}