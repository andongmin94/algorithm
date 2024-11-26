#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return [&]
    {
        int cnt = 0;
        if (num1 == num2) cnt++;
        else cnt--;
        return cnt;
    }();
}