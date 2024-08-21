#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<string>& spell, vector<string>& dic, int depth, int& n) {
    if (depth == spell.size())
    {
        // 현재 순열로 조합된 문자열을 만듭니다.
        string s = "";
        for (const auto& ch : spell)
            s += ch;

        // dic에 현재 생성된 문자열 s가 있는지 확인
        for (const auto& e : dic)
        {
            if (s == e)
            {
                n = 1;
                return;  // 발견하면 더 이상 확인할 필요 없음
            }
        }
        return;
    }

    for (int i = depth; i < spell.size(); i++)
    {
        swap(spell[depth], spell[i]);  // 요소 교환
        permute(spell, dic, depth + 1, n);  // 다음 단계로 재귀 호출
        swap(spell[depth], spell[i]);  // 원래 순서로 복원
    }
}

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    //
    permute(spell, dic, 0, answer);
    if (!answer) answer = 2;
    //
    return answer;
}
