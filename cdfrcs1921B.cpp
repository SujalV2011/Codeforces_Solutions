#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int add=0,remove=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && t[i]=='0')
                remove++;
            if(s[i]=='0' && t[i]=='1')
                add++;    
        }
        cout<<max(add,remove)<<endl;    
    }
    return 0;
}