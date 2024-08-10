#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    //
    for (int i = 1; i <= n; i++)
    {
        int stack = 0;
        for (int j = 1; j <= i; j++)
            if (!(i % j)) stack++;
        if (stack >= 3) answer++;
    }
    //
    return answer;
}