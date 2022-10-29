// Problem link- https://www.codechef.com/submit/MAXIMISEBITS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int setbits = __builtin_popcount(k);
        int count = 0;
        if (k <= n)
        {
            cout << k << endl;
            continue;
        }
        int flag = 0;
        int num = 0;
        int ex = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n == ex + 1)
            {
                flag = 1;
                break;
            }
            if (k & (1LL << i))
            {
                ex++;
                count = count + i;
                num += (1 << i) - 1;
            }
        }
        if (flag == 1)
        {
            cout << count + __builtin_popcount(k - num) << endl;
            //  cout<<"count="<<count<<endl;
            //  cout<<"num="<<num<<endl;
        }

        else
        {
            cout << count + __builtin_popcount(setbits) << endl;
        }
    }
    return 0;
}