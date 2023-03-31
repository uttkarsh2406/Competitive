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
    while (1)
    {
        /* code */
        string inp;
        getline(cin, inp);
        if (inp.length() != 20)
        {
            break;
        }
        int k = 0;
        bool flag = false;
        int ta = 0, tb = 0;
        for (int i = 0; i < 5; i++)
        {
            if (inp[2 * i] == '1')
                ta++;
            if (ta > tb + 5 - i)
            {
                k = 2 * i + 1;
                flag = true;
                cout << "TEAM-A " << k << endl;
                break;
            }
            if (tb > ta + 4 - i)
            {
                k = 2 * i + 1;
                flag = true;
                cout << "TEAM-B " << k << endl;
                break;
            }
            if (inp[2 * i + 1] == '1')
                tb++;
            if (ta > tb + 4 - i)
            {
                k = 2 * i + 2;
                flag = true;
                cout << "TEAM-A " << k << endl;
            }
            if (tb > ta + 4 - i)
            {
                k = 2 * i + 2;
                flag = true;
                cout << "TEAM-B " << k << endl;
            }
        }
        if (flag)
        {
            continue;
        }
        k = 10;
        if (ta > tb)
        {
            flag = true;
            cout << "TEAM-A " << k << endl;
        }
        if (ta > tb)
        {
            flag = true;
            cout << "TEAM-B " << k << endl;
        }
        if (flag)
        {
            continue;
        }
        for (int i = 10; i < 20; i += 2)
        {
            if (inp[i] == '1')
            {
                ta++;
            }
            if (inp[i + 1] == '1')
            {
                tb++;
            }
            k+=2;
            if (ta > tb)
            {
                flag = true;
                cout << "TEAM-A " << k << endl;
                break;
            }
            if (ta > tb)
            {
                flag = true;
                cout << "TEAM-B " << k << endl;
                break;
            }
        }
        if(!flag){
            cout<<"TIE"<<endl;
        }
    }
}