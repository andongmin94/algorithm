#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    //
    if (target.length() > my_string.length()) return 0;
    for (int i = 0; i <= my_string.length() - target.length(); i++)
    {
        if (my_string[i] == target[0])
        {
            bool check = true;
            for (int j = 0; j < target.length(); j++)
                if (my_string[i + j] != target[j]) check = false;
            if (check) answer = 1;
        }
    }
    //
    return answer;
}