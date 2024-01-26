// Problem link -https://www.codechef.com/COOK143B/problems/PER_MED


#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
const int mod = 1'000'000'007;

void solve()
{
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      a[i] = i + 1;
   }
   //  cout<<",,";
   int start = 0, end = n - 1;
   while (start <= end)
   {
      if (start == end)
      {
         cout << a[start++];
         break;
      }
      cout << a[end--] << " ";
      cout << a[start++] << " ";
   }
   cout << endl;
}

int main()
{
   // #ifndef ONLINE_JUDGE
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   // #endif
   ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

   int T;
   cin >> T;
   while (T--)
   {
      solve();
   }

   return 0;
}