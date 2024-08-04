#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    //
    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        bool check = true;
        int a = i;
        while (check)
        {
            if (a % 10 == 5 || a % 10 == 0) a /= 10;
            else check = false;
            
            if (a == 5 || a == 0) break;
        }
        
        if (check)
        {
            answer.push_back(i);
            cnt++;
        };
    }
    if(!(cnt)) answer.push_back(-1);
    //
    return answer;
}