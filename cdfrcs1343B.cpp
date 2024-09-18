#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if((n/2)%2!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int x=2,sum=2;
            cout<<x<<" ";
            for(int i=1;i<n/2;i++)
            {
                x+=2;
                cout<<x<<" ";
                sum+=x;
            }
            x=1;
            cout<<x<<" ";
            sum--;
            for(int i=(n/2)+1;i<n-1;i++)
            {
                x+=2;
                cout<<x<<" ";
                sum-=x;
            }
            cout<<sum<<" ";
            cout<<endl;    
        }    
    }
    return 0;
}