#include <string>
#include <vector>

using namespace std;

int array[100001] = {0,};

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    //
    for (const auto& e : arr)
    {
        if (!array[e]++) answer.push_back(e);
        if (answer.size() == k) break;
    }
    if (answer.size() < k)
    {
        int n = k - answer.size();
        while(n--) answer.push_back(-1);
    }
    //
    return answer;
}