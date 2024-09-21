#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    //
    int a = 0, b = x;
    while(x > 0)
    {
        a += x % 10;
        x /= 10;
    }
    if (b % a) answer = false;
    //
    return answer;
}