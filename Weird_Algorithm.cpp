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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    while (n != 1)
    {
        cout << n << " ";
        if (n & 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }
    }
    cout << 1 << endl;
    return 0;
}