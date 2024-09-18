#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int min_sum = INT_MAX;
    int min_index = -1;

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += heights[i];
    }

    min_sum = sum;
    min_index = 0;

    for (int i = k; i < n; ++i) {
        sum += heights[i] - heights[i - k];
        if (sum < min_sum) {
            min_sum = sum;
            min_index = i - k + 1;
        }
    }

    cout << min_index + 1 << endl; 

    return 0;
}
