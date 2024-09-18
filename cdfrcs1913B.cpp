#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int one=0,zero=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;    
        }
        if(one==zero)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                one--;
            else 
                zero--;

            if(one<0 || zero<0)
            {
                cout<<max(zero,one)<<endl;
                break;
            }
        }
    }
    return 0;
}