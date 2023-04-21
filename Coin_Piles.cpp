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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    tc
    {
        int n, m;
        cin >> n >> m;
        if (n == min(n, m))
            swap(n, m);
        if ((2 * m - n) % 3 == 0 && (2 * m - n) >= 0)
            Y;
        else
            N;
    }
    return 0;
}
