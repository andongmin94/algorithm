#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    //
    if (num1 == num2) answer++;
    else answer--;
    //
    return answer;
}