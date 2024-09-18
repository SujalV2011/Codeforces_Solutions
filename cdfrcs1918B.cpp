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
        int a[n],b[n];

        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
            v.push_back({a[i],b[i]});

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
            cout<<v[i].first<<" ";
        cout<<endl;

        for(int i=0;i<v.size();i++)
            cout<<v[i].second<<" ";    
    }
    return 0;
}