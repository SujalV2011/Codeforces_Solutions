#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int m, s;
    cin >> m >> s;

    if (s == 0 && m > 1 || s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }

    if(s==0 && m==1)
    {
        cout << "0 0" << endl;
        return 0;
    }`

    string smll(m, '0');
    int sum = s;
    for (int i = m - 1; i >= 0; i--) {
        if (sum > 9) 
        {
            smll[i] = '9';
            sum -= 9;
        } 
        else 
        {
            smll[i] = '0' + sum;
            sum = 0;
        }
    }

    if (smll[0] == '0') 
    {
        smll[0] = '1';
        for (int i = 1; i < m; ++i) 
        {
            if (smll[i] != '0') 
            {
                smll[i] -= 1;
                break;
            }
        }
    }

    string large(m, '0');
    sum = s;
    for(int i = 0; i < m; i++) 
    {
        if (sum > 9) 
        {
            large[i] = '9';
            sum -= 9;
        } 
        else 
        {
            large[i] = '0' + sum;
            sum = 0;
        }
    }

    cout<<smll<<" "<<large<<endl;

    return 0;
}
