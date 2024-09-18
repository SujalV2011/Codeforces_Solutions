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
        string s;
        cin>>s;
        int start=0,end=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
                start=i;
                break;
            }
        }
        for(int i=s.length();i>=0;i--)
        {
            if(s[i]=='B')
            {
                end=i;
                break;
            }
        }
        cout<<end-start+1<<endl;
    }
    return 0;
}