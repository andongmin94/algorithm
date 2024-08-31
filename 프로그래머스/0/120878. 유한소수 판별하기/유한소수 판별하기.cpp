#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    //
    int c;
    for (int i = 1; i <= a; i++)
        if (a % i == 0 && b % i == 0) c = i;
    b /= c;
    vector<int> v;
    
    for (int i = 2; i <= b; i++)
    {
        while (b % i == 0)
        {
            v.push_back(i);
            b /= i;
        }
    }
    
    for (const auto& e : v)
        if (e != 2 && e != 5) answer = 2;

    if (!answer) answer = 1;
    //
    return answer;
}