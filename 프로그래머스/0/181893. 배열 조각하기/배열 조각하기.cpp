#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    //
    
    int i = 0;
    answer = arr;
    while(i != query.size())
    {
        vector<int> v;
        if (i & 1)
        {
            for (int j = query[i]; j < answer.size(); j++)
                v.push_back(answer[j]);
        }
        else
        {
            for (int j = 0; j <= query[i]; j++)
                v.push_back(answer[j]);
        }
        answer = v;
        i++;
    }
    //
    return answer;
}