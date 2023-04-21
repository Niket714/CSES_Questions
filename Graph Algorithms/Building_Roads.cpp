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

void dfs(int node, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(it, adj, vis);
    }
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
    int cnt = 0;
    vector<int> res;
    for (int i = 1; i < n + 1; i++)
    {
        if (!vis[i])
        {
            cnt++;
            if (cnt > 1)
                res.push_back(i);
            dfs(i, adj, vis);
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] - 1 << " " << res[i] << endl;
    }

    return 0;
}