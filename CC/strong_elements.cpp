#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll>pre(n),suf(n);
        pre[0]=v[0],suf[n-1]=v[n-1];
        for(int i=1;i<n;i++){
            pre[i]=__gcd(pre[i-1],v[i]);
        }
        for(int i=n-2;i>=0;i--){

            suf[i]=__gcd(suf[i+1],v[i]);
        }
        for(auto i:pre){
            cout<<i;
        }
        cout<<endl;
        for(auto i:suf){
            cout<<i;
        }
        cout<<endl;
        int count=0;
        for (int i = 0; i < n; i++)
        {
                if(i==0 && suf[i+1]>1){
                    count++;
                }   
                else if(i==n-1 && pre[n-2]>1){
                    count++;
                }
                else if(__gcd(pre[i-1],suf[i+1])>1){
                    count++;
                }
        }
        cout<<count<<endl;
        
    }
}