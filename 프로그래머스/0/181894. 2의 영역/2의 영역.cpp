#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    //
    int idx_min = 100000;
    int idx_max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            idx_min = i < idx_min ? i : idx_min;
            idx_max = idx_max < i ? i : idx_max;
        }
    }
    if (!idx_max)
    {
        answer.push_back(-1);
        return answer;
    }
    else if (idx_min == idx_max)
    {
        answer.push_back(2);
        return answer;
    }
    for (int i = idx_min; i <= idx_max; i++)
    {
        answer.push_back(arr[i]);
    }
    //
    return answer;
}