#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    //
    for (auto e : photo)
    {
        int sum = 0;
        for (auto e2 : e)
        {
            for (int i = 0; i < name.size(); i++)
                if (e2 == name[i]) sum += yearning[i];
        }
        answer.push_back(sum);
    }
    //
    return answer;
}