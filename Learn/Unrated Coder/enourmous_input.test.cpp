#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;

    // ans denotes number of integers n divisible by k
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t % k == 0)
        {
            ans++;
        }
    }

    // Print the ans.
    cout << ans << "\n";
}