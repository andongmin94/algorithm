#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //
    if (num_list.size() >= 11)
    {
        for (const auto& e : num_list)
            answer += e;
    }
    else
    {
        answer++;
        for (const auto& e : num_list)
            answer *= e;
    }
    //
    return answer;
}