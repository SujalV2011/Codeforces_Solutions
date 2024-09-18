#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    cin>>str[i];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(str[i][j] == '1')
        {
          if(i+1<n && j+1<n && str[i+1][j] == '1' && str[i][j+1] == '1')
          {
            cout<<"SQUARE"<<endl;
            return;
          }
          else
          {
            cout<<"TRIANGLE"<<endl;
            return;
          }
        }
      }
    }
}
int main()
{
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        solve();
    }
    return 0;
}