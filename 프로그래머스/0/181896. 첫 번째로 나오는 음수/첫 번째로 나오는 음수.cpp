#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //
    for (auto& e : num_list)
    {
      if (e < 0) break;
        answer++;
    }
    if (answer == num_list.size()) answer = -1;
    //
    return answer;
}