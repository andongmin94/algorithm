#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return [&]{ return num1 - num2; }();
}