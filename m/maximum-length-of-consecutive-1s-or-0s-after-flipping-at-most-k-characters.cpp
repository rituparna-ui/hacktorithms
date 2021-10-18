#include <bits/stdc++.h>
using namespace std;
  
int maxLength(string str, int n,
              char c, int k)
{
    int ans = -1;
    int cnt = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        if (str[right] == c) {
            cnt++;
        }
        while (cnt > k) {
            if (str[left] == c) {
                cnt--;
            }
            left++;
        }
        ans = max(ans, right - left + 1);
    }
  
    return ans;
}
int maxConsecutiveSegment(string S, int K)
{
    int N = S.length();
    return max(maxLength(S, N, '0', K),
               maxLength(S, N, '1', K));
}
int main()
{
    string S = "1001";
    int K = 1;
    cout << maxConsecutiveSegment(S, K);
  
    return 0;
}
