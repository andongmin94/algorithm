#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    //
    int a = 0, b = 0;
    
    for (auto e : goal)
    {
        if (a != cards1.size() && e == cards1[a]) a++;
        else if (b != cards2.size() && e == cards2[b]) b++;
    }
    
    if (a + b >= goal.size()) answer += "Yes";
    else answer += "No";
    //
    return answer;
}