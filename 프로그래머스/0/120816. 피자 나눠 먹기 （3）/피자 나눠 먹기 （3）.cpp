#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    //
    if (n % slice) answer += n / slice + 1;
    else answer += n / slice;
    //
    return answer;
}