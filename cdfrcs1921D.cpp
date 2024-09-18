#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<long long> a(n, 0), b(m, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += max(abs(a[i] - b[m - i - 1]), abs(a[i] - b[n - i - 1]));
        }
        cout << sum << endl;
    }
}
