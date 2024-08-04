#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    //
    while (A != B)
    {
        char a = A[A.length() - 1];
        for (int i = A.length() - 1; i > 0; i--)
        {
            A[i] = A[i - 1];
        }
        A[0] = a;
        answer++;
        if (answer == 100)
        {
            answer = -1;
            break;
        }
    }
    //
    return answer;
}