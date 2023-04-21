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

int mod_pow(int a, int n, int m)
{
    int res = 1;
    while (n)
    {
        if (n % 2 == 0)
        {
            a = ((a % m) * (a % m)) % m;
            n = n / 2;
        }
        else
        {
            res = ((res % m) * (a % m)) % m;
            n--;
        }
    }
    return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    cout << mod_pow(2, n, p) << endl;
    return 0;
}