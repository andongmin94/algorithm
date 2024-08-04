#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    //
    for (auto& e : queries)
    {
        int min = 1000000;
        for (int i = e[0]; i <= e[1]; i++)
        {
            if (arr[i] > e[2] && arr[i] < min) min = arr[i];
        }
        if (min == 1000000) min = -1;
        answer.push_back(min);
    }
    //
    return answer;
}