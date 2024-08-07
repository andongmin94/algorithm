#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    //
    for (const auto& e : num_str)
        answer += static_cast<int>(e - '0');
    //
    return answer;
}