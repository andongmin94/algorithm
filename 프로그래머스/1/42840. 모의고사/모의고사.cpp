#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    //
    vector<int> one = {1,2,3,4,5};
    int a = 0;
    vector<int> two = {2,1,2,3,2,4,2,5};
    int b = 0;
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    int c = 0;
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == one[i % one.size()]) a++;
        if (answers[i] == two[i % two.size()]) b++;
        if (answers[i] == thr[i % thr.size()]) c++;
    }
    if (max(a, max(b, c)) == a) answer.push_back(1);
    if (max(a, max(b, c)) == b) answer.push_back(2);
    if (max(a, max(b, c)) == c) answer.push_back(3);
    //
    return answer;
}