#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    //
    for (const auto& e : arr)
    {
        bool check = true;
        for (const auto& e2 : delete_list)
        {
            if (e == e2) check = false;
        }
        if (check) answer.push_back(e);
    }
    //
    return answer;
}