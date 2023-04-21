#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define NP cout << "-1" << endl
#define vector_input                   \
    vector<int> v(n);                  \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cin >> v[i];                   \
    }
#define one_input \
    int n;        \
    cin >> n
#define two_input \
    int a, b;     \
    cin >> a >> b
#define three_input \
    int a, b, c;    \
    cin >> a >> b >> c
const int p = 1000000007;

bool bfs(int node, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;
    queue<pair<int, int>> q;
    q.push({node, 1});
    while (!q.empty())
    {
        int x = q.front().first;
        int team = q.front().second;
        q.pop();

        for (auto &it : adj[x])
        {
            if (vis[it] == team)
                return false;
            else if (!vis[it])
            {
                if (team == 1)
                    vis[it] = 2;
                else
                    vis[it] = 1;
                q.push({it, vis[it]});
            }
        }
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int k, l;
        cin >> k >> l;
        adj[k].push_back(l);
        adj[l].push_back(k);
    }
    vector<int> vis(n + 1, 0);
    int flag = 1;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i])
        {
            if (bfs(i, adj, vis) == false)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            cout << vis[i] << " ";
        }
        cout << endl;
    }

    return 0;
}