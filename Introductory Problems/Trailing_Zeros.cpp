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
    int n;
    cin >> n;
    int temp = 5 , cnt = 0;;
    while (temp <= n)
    {
        int res = temp;
        while (res)
        {
            if (res % 5 == 0)
            {
                cnt++;
                res /= 5;
            }
            else
                break;
        }
        temp += 5;
    }
    cout << cnt << endl;
    return 0;
}