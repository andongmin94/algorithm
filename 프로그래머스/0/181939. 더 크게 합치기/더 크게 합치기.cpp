#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    //
    int a_ = stoi(to_string(a) + to_string(b));
    int b_ = stoi(to_string(b) + to_string(a));
    answer = max(a_, b_);
    //
    return answer;
}