// problem link:- https://www.codechef.com/START13B/problems/DIWALI1

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        long long ca = b + x * a;
        long long cc = c + y * a;
        long long mi = min(ca, cc);
        cout << p / mi << "\n";
    }
    return 0;
}