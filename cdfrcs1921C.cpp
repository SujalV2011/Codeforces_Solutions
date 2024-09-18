#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        long long sum=0;
        sum+=min((a*arr[0]),b);
        for(int i=1;i<n;i++)
        {
            sum+=min((a*(arr[i]-arr[i-1])),(b));
        }    
        if(sum<f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;  
    }
    return 0;
}