#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define idx(x) (x == '-' ? 26 : (x - 'a'))
#define MOD 1000000007

struct trie
{
    /* data */
    int pos, pri;
    trie *arr[30];
    trie(int po, int pr)
    {
        pos = po;
        pri = pr;
        for (int i = 0; i < 30; i++)
        {
            arr[i] = NULL;
        }
    }
    trie()
    {
        for (int i = 0; i < 30; i++)
        {
            arr[i] = NULL;
        }
    }
};

trie *insert(trie *root, int p, string s, int val, int in)
{
    if (p == s.size())
        return NULL;
    int i = idx(s[p]);
    if (!root->arr[i])
    {
        root->arr[i] = new trie(in, val);
    }
    else if (root->arr[i]->pri < val)
    {
        root->arr[i]->pri = val;
        root->arr[i]->pos = in;
    }
    root->arr[i] = insert(root->arr[i], p + 1, s, val, in);
    return root;
}

int query(trie *root, int p, string str)
{
    int l = str.size();
    if (p > l || !root)
    {
        return -1;
    }
    if (p == l)
    {
        return root->pos;
    }
    int i = idx(str[p]);
    return query(root->arr[i], p + 1, str);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /* code */

    ll n;
    cin >> n;
    trie *root = new trie(-1, -1);
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        int val;
        cin >> str >> val;
        s.push_back(str);
        insert(root, 0, str, val, i);
    }
    ll q;
    cin >> q;
    string qv;
    for (int i = 0; i < q; i++)
    {
        cin >> qv;
        int ret = query(root, 0, qv);
        cout << (ret == -1 ? "NO" : s[ret]) << endl;
    }
}