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
        string s="abcdefghijklmnopqrstuvwxyz";
 
        if(n<=28)
        {
            cout<<"aa"<<s[n-3];
        }
        else if(n<=52)
        {
            cout<<s[0]<<s[n-28]<<s[25];
        }
        else
        {
            cout<<s[n-53]<<s[25]<<s[25];
        }
 
        cout<<endl;
    }
    return 0;
}