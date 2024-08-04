#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    //
    for (auto& e : my_string)
    {
        if (e != 'a' && e != 'e' && e != 'i' && e != 'o' && e != 'u')
            answer += e;
    }
    //
    return answer;
}