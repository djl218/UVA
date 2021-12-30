#include <bits/stdc++.h>
using namespace std;

// Time: O(1)
// Space: O(1)
// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2172
int main()
{
    while (true)
    {
        int n, m, c;
        cin >> n >> m >> c;
        if (n + m + c == 0)
        {
            return 0;
        }
        int out;
        if (c == 0)
        {
            out = (n - 7) * (m - 7) / 2;
        }
        else
        {
            out = ((n - 7) * (m - 7) + 1) / 2;
        }
        cout << out << endl;
    }
    return 0;
}