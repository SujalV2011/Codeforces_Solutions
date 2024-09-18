#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,y;
        cin>>n>>x>>y;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((a[j]+a[i])%x==0 && (a[j]-a[i])%y==0)
                    cnt++;
            }
        }
        cout<<cnt<<endl;    
    }
    return 0;
}