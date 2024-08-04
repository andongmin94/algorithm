#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    //
    int maximum = 0;
    int idx;
    for (int i = 0; i < array.size(); i++)
    {
        if (maximum < array[i])
        {
            maximum = array[i];
            idx = i;
        }
    }
    answer.push_back(maximum);
    answer.push_back(idx);
    //
    return answer;
}