#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    //
    int arr[26] = {0,};
    int Arr[26] = {0,};
    bool space = true;
    for (const auto& e : my_string)
    {
        if (e == ' ' && space)
        {
            answer += e;
            space = !space;
        }
        if ('A' <= e && e <= 'Z')
        {
            if (!Arr[e - 'A']) answer += e;
            Arr[e - 'A']++;
        }
        if ('a' <= e && e <= 'z')
        {
            if (!arr[e - 'a']) answer += e;
            arr[e - 'a']++;
        }
    }
    //
    return answer;
}