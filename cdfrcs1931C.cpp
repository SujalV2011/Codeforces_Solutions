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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt1 = 1, cnt2 = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[0] == a[i])
                cnt1++;
            else
                break;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[n - 1] == a[i])
                cnt2++;
            else
                break;
        }

        if (a[0] == a[n - 1])
            cout<<n-min(n, cnt1 + cnt2)<<endl;
        else
            cout<< n-max(cnt1, cnt2)<<endl;
    }
    return 0;
}
// 8
// 6
// 1 2 3 4 5 1
// 7
// 1 1 1 1 1 1 1
// 8
// 8 8 8 1 2 8 8 8
// 1
// 1
// 2
// 1 2
// 3
// 1 2 3
// 7
// 4 3 2 7 1 1 3
// 9
// 9 9 2 9 2 5 5 5 3
