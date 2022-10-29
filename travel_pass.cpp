#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        int count = 0;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count++;
        }

        cout << count * a + ((n - count) * b) << endl;
    }
    
    return 0;
}