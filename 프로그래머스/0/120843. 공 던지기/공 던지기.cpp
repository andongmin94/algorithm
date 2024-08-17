#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    //
    while(--k)
    {
        if (answer == numbers.size() + 1) answer = 1;
        answer++;
        if (answer == numbers.size() + 1) answer = 1;
        answer++;
        if (answer == numbers.size() + 1) answer = 1;
    }
    answer++;
    //
    return answer;
}