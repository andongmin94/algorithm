#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return [&]() -> int { return num1 * num2; }();
}