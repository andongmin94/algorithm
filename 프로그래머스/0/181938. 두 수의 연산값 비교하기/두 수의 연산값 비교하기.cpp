#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    //
    int c = stoi(to_string(a) + to_string(b));
    answer = max(c, 2 * a * b);
    //
    return answer;
}