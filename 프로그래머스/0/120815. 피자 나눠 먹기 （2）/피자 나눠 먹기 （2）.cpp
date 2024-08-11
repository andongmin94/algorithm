#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    //
    while (++answer * 6 % n) {}
    //
    return answer;
}