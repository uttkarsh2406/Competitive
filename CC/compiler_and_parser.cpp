#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

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
        /* code */
        string s;
        cin >> s;
        ll res = 0,ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='<'){
                res++;
            }
            else if(s[i]=='>'){
                res--;
            }
            if(res==0){
                ans=i+1;
            }
            else if(res<0){
                break;
            }
        }
        cout<<ans<<endl;
    }
}