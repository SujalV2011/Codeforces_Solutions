#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int k=n;
        vector<long long> a(n),d(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>d[i];
        vector<int> kill;    
        int dead=0;
        while(n>0)
        {
            vector<long long> temp1,temp2;
            temp1.clear();
            temp2.clear();
            if(a.size()>=2 && a[1]>d[0])
            {
                dead++;
                n--;
            }
            else if(a.size()>=1)
            {
                temp1.push_back(a[0]);
                temp2.push_back(d[0]);
            }
            
            for (int i = 1; i < a.size()-1;i++) 
            {
                if (a.size()>=2 && (a[i - 1] + a[i + 1])> d[i]) 
                {
                    dead++;
                    n--;
                }
                else 
                {
                    if(a.size()>=1)
                    {
                        temp1.push_back(a[i]);
                        temp2.push_back(d[i]);
                    }
                }
            }
                    
            if(a.size()>=2 && a[a.size()-2]>d[d.size()-1])
            {
                dead++;
                n--;
            }
            else if(a.size()>=1)
            {
                temp1.push_back(a[a.size()-1]);
                temp2.push_back(d[d.size()-1]);
            }
            
            a.clear();
            d.clear();
            if(dead==0) break;
            kill.push_back(dead);
            dead=0;
            a=temp1;
            d=temp2;
        }
        for(int i=0;i<k;i++)
        {
            if(i<kill.size())
                cout<<kill[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}
