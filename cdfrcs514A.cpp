#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
    
        int flip = 9 - digit;

        if (flip < digit && !(i == 0 && s[i] == '9'))
        {
            s[i] = flip + '0';
        }
    }

    cout << s;
    return 0;
}
