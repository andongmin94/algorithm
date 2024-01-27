#include <bits/stdc++.h>

using namespace std;

string miro[1002];
int vis[1002][1002] = {0,};
int burn[1002][1002] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
        cin >> miro[i];

    queue<pair<int, int>> human;
    queue<pair<int, int>> fire;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (miro[i][j] == 'J')
            {
                human.push({i, j});
                vis[i][j] = 1;
            }
            if (miro[i][j] == 'F')
            {
                fire.push({i, j});
                burn[i][j] = 1;
            }
        }
    }

    while (!(fire.empty()))
    {
        pair<int, int> q = fire.front();
        fire.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = q.first + dx[i];
            int ny = q.second + dy[i];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (burn[nx][ny] >= 1 || miro[nx][ny] == '#') continue;
            burn[nx][ny] = burn[q.first][q.second] + 1;
            fire.push({nx,ny});
        }
    }

    while (!(human.empty()))
    {
        pair<int, int> q = human.front();
        human.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = q.first + dx[i];
            int ny = q.second + dy[i];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            {
                cout << vis[q.first][q.second];
                return 0;
            }

            if (vis[nx][ny] >= 1 || miro[nx][ny] == '#') continue;
            if (burn[nx][ny] != 0 && burn[nx][ny] <= vis[q.first][q.second] + 1) continue;
            vis[nx][ny] = vis[q.first][q.second] + 1;
            human.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE";
}
