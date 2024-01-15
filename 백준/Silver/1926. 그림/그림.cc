#include <bits/stdc++.h>

using namespace std;

int board[502][502] = { 0, };
int visited[502][502] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n, m;
    cin >> n >> m;
    int max_ = 0;
    int art = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    queue<pair<int, int>> Q;

    int Dx[4] = {1,0,-1,0};
    int Dy[4] = {0,1,0,-1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            if (board[i][j] == 1)
            {
                art++;
                Q.push({i,j});
                visited[i][j] = 1;
            }
            while (!(Q.empty()))
            {
                pair<int, int> cur = Q.front();
                Q.pop();
                sum++;
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.first + Dx[k];
                    int ny = cur.second + Dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (board[nx][ny] != 1 || visited[nx][ny] != 0)
                        continue;
                    board[nx][ny] = 0;
                    visited[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            if (max_ < sum)
                max_ = sum;
        }
    }
    if (art != 0)
        cout << art << '\n' << max_;
    else
        cout << 0 << '\n' << 0;
}