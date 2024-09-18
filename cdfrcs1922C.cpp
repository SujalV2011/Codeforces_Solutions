#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        while(m--)
        {
            long int x,y;
            cin>>x>>y;
            long int coins=0;
            if(x<y)
            {
                for(int i=x-1;i<y-1;i++)
                {
                    if(i==0)
                        coins++;
                    else if((a[i+1]-a[i])<(a[i]-a[i-1]))
                        coins++;
                    else
                        coins+=(a[i+1]-a[i]);        
                }
            }
            else
            {
                for(int i=x-1;i>y-1;i--)
                {
                    if(i==(n-1))
                        coins++;
                    else if((a[i]-a[i-1])<(a[i+1]-a[i]))
                        coins++;
                    else
                        coins+=(a[i]-a[i-1]);        
                }
            }
            cout<<coins<<endl;
        }
    }
    return 0;
}