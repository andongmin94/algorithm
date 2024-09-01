#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    //
    int a = 0, b = 0;
    int n = polynomial.size();
    int i = 0;

    while (i < n)
    {
        // 공백 건너뛰기
        if (polynomial[i] == ' ')
        {
            i++;
            continue;
        }
        
        // 부호 처리
        int sign = 1;
        if (polynomial[i] == '+') i++;

        // 계수 처리
        int coefficient = 0;
        while (i < n && isdigit(polynomial[i]))
        {
            coefficient = coefficient * 10 + (polynomial[i] - '0');
            i++;
        }
        
        // 'x'가 있는지 확인
        if (i < n && polynomial[i] == 'x')
        {
            if (!coefficient) coefficient = 1; // 'x'만 있을 때 계수는 1

            a += sign * coefficient;
            i++;
        }
        else b += sign * coefficient;
    }
    
    // 결과 문자열 생성
    if (a != 0)
    {
        if (a == 1) answer += "x";
        else answer += to_string(a) + "x";
    }
    
    if (b != 0)
    {
        if (a != 0)
        {
            if (b > 0) answer += " + " + to_string(b);
            else answer += " - " + to_string(-b);
        }
        else answer += to_string(b);
    }
    
    //
    return answer;
}