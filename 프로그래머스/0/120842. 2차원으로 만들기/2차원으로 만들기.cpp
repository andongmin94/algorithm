#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    //
    vector<int> v;
    for (int i = 0; i < num_list.size(); i++)
    {
        v.push_back(num_list[i]);
        if (!((i + 1) % n))
        {
            answer.push_back(v);
            v.clear();
        }
    }
    //
    return answer;
}