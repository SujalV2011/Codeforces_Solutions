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
        string s;
        cin>>s;
        if(s[0]<=s[s.size()-1])
            cout<<s<<endl;
        else
        {
            string temp=s;
            reverse(s.begin(),s.end());
            s+=temp;
            cout<<s<<endl;
        }    
    }
    return 0;
}
