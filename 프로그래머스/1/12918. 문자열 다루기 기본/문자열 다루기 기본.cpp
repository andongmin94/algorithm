#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    //
    if (s.length() == 4 || s.length() == 6)
    {
        for (auto e : s)
            if (!isdigit(e))
                answer = false;
    }
    else answer = false;
    //
    return answer;
}