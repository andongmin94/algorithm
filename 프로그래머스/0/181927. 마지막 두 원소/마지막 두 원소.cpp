#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    //
    answer = move(num_list);
    if (answer[answer.size() - 1] > answer[answer.size() - 2])
        answer.push_back(answer[answer.size() - 1] - answer[answer.size() - 2]);
    else answer.push_back(answer[answer.size() - 1] * 2);
    //
    return answer;
}