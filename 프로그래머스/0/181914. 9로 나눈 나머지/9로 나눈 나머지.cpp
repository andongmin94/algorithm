#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (const auto& e: number)
        answer += (int)(e - '0');
    answer %= 9;
    return answer;
}