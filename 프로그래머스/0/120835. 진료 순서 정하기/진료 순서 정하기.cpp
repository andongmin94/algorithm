#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    //
    for (int i = 0; i < emergency.size(); i++)
    {
        int rank = 0;
        
        for (int j = 0; j < emergency.size(); j++)
            if (emergency[i] <= emergency[j]) rank++;

        answer.push_back(rank);
    }
    //
    return answer;
}