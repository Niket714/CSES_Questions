#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int p = 1000000007;
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n-1) , hash(n , 0);
    for (int i = 0; i < n-1; i++)
    {
        cin >> v[i];
        hash[v[i] - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if(hash[i] == 0)
        {
            cout << i+1 << endl;
            break;
        }
    }
    
    

    return 0;
}