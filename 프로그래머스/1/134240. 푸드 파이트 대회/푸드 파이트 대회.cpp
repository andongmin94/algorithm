#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    //
    for (int i = 1; i < food.size(); i++)
    {
        if (food[i] % 2) food[i]--;
        while(food[i]--)
        {
            food[i]--;
            answer += to_string(i);
        }
    }
    answer += '0';
    int k = answer.length() - 2;
    for (int i = k; i >= 0; i--)
        answer += answer[i];
    //
    return answer;
}