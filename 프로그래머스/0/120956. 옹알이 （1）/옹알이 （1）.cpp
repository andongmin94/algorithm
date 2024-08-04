#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    //
    for (const auto& e : babbling)
    {
        bool check = true;
        int cnt = 0;
        for (int i = 0; i < e.length(); i++)
        {
            if (e[i] == 'a' && e[i + 1] == 'y' && e[i + 2] == 'a' && i < e.length() - 2) cnt += 3;
      
            if (e[i] == 'y' && e[i + 1] == 'e' && i < e.length() - 1) cnt += 2;   
                
            if (e[i] == 'w' && e[i + 1] == 'o' && e[i + 2] == 'o' && i < e.length() - 2) cnt += 3;
   
            if (e[i] == 'm' && e[i + 1] == 'a' && i < e.length() - 1) cnt += 2;
        }
        if (cnt == e.length()) answer++;
    }
    //
    return answer;
}