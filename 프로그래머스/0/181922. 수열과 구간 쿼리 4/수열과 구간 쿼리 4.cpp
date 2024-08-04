#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    //
    for (auto& e : queries)
    {
        for (int i = e[0]; i <= e[1]; i++)
        {
            if (!(i % e[2])) arr[i]++;
        }
    }
    answer = arr;
    //
    return answer;
}