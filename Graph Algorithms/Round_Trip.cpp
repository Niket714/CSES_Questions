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
const int p = 1000000007;

bool dfs(int i, vector<int> adj[], vector<int> &vis, int parent, vector<int> &path)
{
    vis[i] = 1;
    path.push_back(i);
    for (auto it : adj[i])
    {
        if (vis[it] && it != parent)
        {
            path.push_back(it);
            return true;
        }
        else if (!vis[it])
        {
            if (dfs(it, adj, vis, i, path))
                return true;
        }
    }
    path.pop_back();
    return false;
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
    vector<int> vis(n + 1);
    int flag = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i])
        {
            vector<int> path;
            if (dfs(i, adj, vis, -1, path))
            {
                flag = 1;
                int j = 0;
                for (j = 0; j < path.size() - 1; j++)
                {
                    if (path[j] == path[path.size() - 1])
                        break;
                }
                cout << path.size() - j << endl;
                for (j; j < path.size(); j++)
                {
                    cout << path[j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }
    if (flag == 0)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}