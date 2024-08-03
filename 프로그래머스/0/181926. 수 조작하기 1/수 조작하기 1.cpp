#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    //
    for (const auto& e : control)
    {
        if (e == 'w') n++;
        if (e == 's') n--;
        if (e == 'd') n += 10;
        if (e == 'a') n -= 10;
    }
    answer = n;
    //
    return answer;
}