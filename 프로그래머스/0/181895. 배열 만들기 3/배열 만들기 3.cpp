#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    //
    for (const auto& e : intervals)
    {
        for (int i = e[0]; i <= e[1]; i++)
            answer.push_back(arr[i]);
    }
    //
    return answer;
}