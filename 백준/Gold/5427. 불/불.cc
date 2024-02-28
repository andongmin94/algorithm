#include <bits/stdc++.h>

using namespace std;

char dist[1001][1001];
int vis_fire[1001][1001];
int vis_man[1001][1001];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        fill(&vis_fire[0][0], &vis_fire[1000][1001], 0);
        fill(&vis_man[0][0], &vis_man[1000][1001], 0);
        
        int w,h;
        cin >> w >> h;

        queue<pair<int, int>> fire;
        queue<pair<int, int>> man;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> dist[i][j];
                if (dist[i][j] == '*')
                {
                    fire.push({i,j});
                    vis_fire[i][j] = 1;
                }
                if (dist[i][j] == '@')
                {
                    man.push({i,j});
                    vis_man[i][j] = 1;
                }
            }
        }

        while(!fire.empty())
        {
            pair<int,int> q = fire.front();
            fire.pop();

            for (int i = 0; i < 4; i++)
            {
                int nx = dx[i] + q.first;
                int ny = dy[i] + q.second;

                if (nx >= 0 && nx < h && ny >= 0 && ny < w && dist[nx][ny] != '#' && vis_fire[nx][ny] == 0)
                {
                    fire.push({nx, ny});
                    vis_fire[nx][ny] = vis_fire[q.first][q.second] + 1;
                }
            }
        }

        int ans = 1000000;

        while(!man.empty())
        {
            pair<int,int> q = man.front();
            man.pop();
            if (q.first == 0 || q.first == h - 1 || q.second == 0 || q.second == w - 1)
                ans = min(ans, vis_man[q.first][q.second]);
            if (ans != 1000000) break;
            for (int i = 0; i < 4; i++)
            {
                int nx = dx[i] + q.first;
                int ny = dy[i] + q.second;

                if (nx >= 0 && nx < h && ny >= 0 && ny < w && dist[nx][ny] != '#' && dist[nx][ny] != '*' && vis_man[nx][ny] == 0
                    && (vis_fire[nx][ny] == 0 || vis_man[q.first][q.second] + 1 < vis_fire[nx][ny]))
                {
                    man.push({nx, ny});
                    vis_man[nx][ny] = vis_man[q.first][q.second] + 1;
                    if (nx == 0 || nx == h - 1 || ny == 0 || ny == w - 1)
                        ans = min(ans, vis_man[nx][ny]);
                }
            }
        }
        
        if (ans != 1000000) cout << ans << '\n';
        else cout << "IMPOSSIBLE" << '\n';
    }
}