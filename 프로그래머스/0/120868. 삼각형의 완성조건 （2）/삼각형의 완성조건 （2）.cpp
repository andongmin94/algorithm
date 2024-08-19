#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    //
    sort(sides.begin(), sides.end());
    for (int i = 1; i <= sides.back(); i++)
        if (sides.front() + i > sides.back()) answer++;
    
    answer += sides.front() - 1;
    //
    return answer;
}