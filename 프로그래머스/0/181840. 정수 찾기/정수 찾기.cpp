#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    //
    for (const auto& e : num_list)
        if (e == n) answer = 1;
    //
    return answer;
}