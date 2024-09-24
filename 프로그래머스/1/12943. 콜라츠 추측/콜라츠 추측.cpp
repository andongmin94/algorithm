#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    //
    long long n = num;
    while(n != 1)
    {
        answer++;
        if (n % 2) n = n * 3 + 1;
        else n /= 2;
        
        if (answer > 500) return -1;
    }
    //
    return answer;
}