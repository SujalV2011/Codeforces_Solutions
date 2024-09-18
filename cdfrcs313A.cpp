#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    if(n[0]!='-')
        cout<<n<<endl;
    else
    {
        if(n[n.size()-1]>n[n.size()-2])
        {
            n.resize(n.size()-1);
            int x=stoi(n);
            cout<<x<<endl;
        }
        else
        {
            n[n.size()-2]=n[n.size()-1];
            n.resize(n.size()-1);
            int x=stoi(n);
            cout<<x<<endl;
        }
    }
    return 0;
}