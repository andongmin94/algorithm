#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    //
    int a = 1;
    int fac = 1;
    while (fac <= n)
    {
        a++;
        fac *= a;
    }
    answer = --a;
    //
    return answer;
}