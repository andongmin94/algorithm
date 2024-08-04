#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    //
    int even = 0;
    int odd = 0;
    for (auto& e : num_list)
    {
        if (e % 2) odd++;
        else even++;
    }
    answer.push_back(even);
    answer.push_back(odd);
    //
    return answer;
}