#include <bits/stdc++.h>

using namespace std;

int board[1000][1000];
int visited[1000][1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dy[] = {0,1,0,-1};
    int dx[] = {1,0,-1,0};

    int m, n;
    cin >> m >> n;

    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)
            {
                Q.push({i, j});
                visited[i][j] = 1;
            }
            if (board[i][j] == -1) visited[i][j] = -1;
        }
    }

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();

        for(int i = 0; i < 4; i++)
        {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];

            if(ny < 0 || ny >= n) continue;
            if(nx < 0 || nx >= m) continue;

            if(board[ny][nx] == 0 && visited[ny][nx] == 0)
            {
                Q.push({ny, nx});
                visited[ny][nx] = visited[cur.first][cur.second] + 1;
            }
        }
    }

    int max = 0;
    bool checker = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == 0) checker = true;
            if (max < visited[i][j]) max = visited[i][j];
        }
    }
    if (checker) cout << -1;
    else cout << max - 1;
}
