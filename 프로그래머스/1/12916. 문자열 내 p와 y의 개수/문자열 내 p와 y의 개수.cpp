#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    //
    int p = 0, y = 0;
    for (auto e : s)
    {
        if (e == 'p' || e == 'P') p++;
        else if (e == 'y' || e == 'Y') y++;
    }
    if (p != y) answer = false;
    //
    return answer;
}