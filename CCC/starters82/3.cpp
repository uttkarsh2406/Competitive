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
    ll tt;
    cin >> tt;
    while (tt--)
    {

        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        bool f=false,t=false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==1){
                f=true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if((a[0]==0 && b[0]==1) || (a[0]==1 && b[0]==0)){
            cout<<"NO"<<endl;
            continue;
        }
        if((a[n-1]==0 && b[n-1]==1) || (a[n-1]==1 && b[n-1]==0)){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<n-1;i++){
            if(a[i]==0 && b[i]==1 && f){
                continue;
            }
            else if(a[i]==0 && b[i]==1 && !f){
                t=true;
                break;
            }
            if(b[i]==0 && a[i]==1){
                t=true;
                break;
            }
        }
        if(t){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}