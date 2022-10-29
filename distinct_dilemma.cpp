// Problem link- https://www.codechef.com/submit/DISTDILEM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        int count = 0;
        int k = 1;
        while (1)
        {
            if (sum < 0)
            {
                break;
            }
            else
            {
                sum -= k;
                k++;
                count++;
            }
        }
        cout << count - 1 << endl;
    }
    return 0;
}