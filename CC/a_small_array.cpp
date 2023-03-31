#include <bits/stdc++.h>
using namespace std;
#define ll long double

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    /* code */
    ll n, k;
    cin >> n >> k;
    bool flag = false;
    ll sum = 0;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            flag = true;
        }
        sum += v[i];
    }
    if (!flag)
    {
        cout << sum / k;
    }
    else
    {
        ll mx = INT_MIN;
        ll temp = 0;
        ll d=0;
        for(int i=0;i<n;i++){
            d+=v[i];
            if(d>mx){
                mx=d;
            }
            if(d<0){
                d=0;
            }
        }

        // cout<<sum<<" "<<mx<<" "<<endl;
        cout << double(double(sum - mx + double(mx / k))) << endl;
    }
}