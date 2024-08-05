#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    //
    int divide = 0;
    for (const auto& e : myString)
    {
        if (e == 'x') 
        {
            answer.push_back(divide);
            divide = 0;
        }
        else divide++;
    }
    answer.push_back(divide);
    //
    return answer;
}