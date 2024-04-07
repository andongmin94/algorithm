#include <bits/stdc++.h>

using namespace std;

string temp[100];
int board[100][100];
int visited[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int dy[4] = {0,1,0,-1};
    int dx[4] = {1,0,-1,0};

    for (int i = 0; i < n; i++)
        cin >> temp[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            board[i][j] = temp[i][j] - 48;

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    visited[0][0] = 1;

    while(!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];

            if (ny < 0 || ny >= n) continue;
            if (nx < 0 || nx >= m) continue;

            if (board[ny][nx] == 1 && visited[ny][nx] == 0)
            {
                visited[ny][nx] = visited[cur.first][cur.second] + 1;
                Q.push({ny, nx});
            }
        }
    }

    cout << visited[n-1][m-1];
}
