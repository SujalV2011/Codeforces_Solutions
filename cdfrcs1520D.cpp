#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        long long res = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            res += mp[x];
            mp[x]++;
        }

        cout << res << endl;
    }
    return 0;
}