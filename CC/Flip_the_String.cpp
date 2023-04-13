#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        string a, b;
        cin >> a >> b;

        ll count1 = 0, count2 = 0;
        int as = a.size();
        int i = 0;
        bool flag1 = true,flag2=true;;
        while (i < as)
        {
            if (i & 1)
            {
                if (a[i] == b[i])
                {
                    flag1 = true;
                }
                if (a[i] != b[i])
                {
                    if (flag1)
                    {
                        count1++;
                    }
                    flag1 = false;
                }
            }
            else
            {
                if(a[i]==b[i]){
                    flag2=true;
                }
                if(a[i]!=b[i]){
                    if(flag2){
                        count2++;
                    }
                    flag2=false;
                }
            }
            // cout<<i<<" "<<count1<<" "<<count2<<endl;
            i++;

        }
        cout<<count1+count2<<endl;

    }
}


// 100001
// 110111