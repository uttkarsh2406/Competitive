#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_valid(string temp)
{
    int c3 = 0, c5 = 0, c8 = 0,o=0;

    for (int i = temp.size()-1;i>=0; i--)
    {
        if(temp[i]==' '){
            break;
        }
        if (temp[i] == '3')
        {
            c3++;
        }
        else if (temp[i] == '5')
        {
            c5++;
        }
        else if (temp[i] == '8')
        {
            c8++;
        }
        else
        {
            o++;
        }
    }
    if(o){
        return false;
    }
    if (c3 <= c5 && c5 <= c8)
    {
        return true;
    }
    return false;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int count = 0;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        string temp;
        getline(cin, temp);

        if (is_valid(temp))
        {
            count++;
        }
    }
    cout << count << endl;
}