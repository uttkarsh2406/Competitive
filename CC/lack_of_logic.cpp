#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
        string s;
    getline(cin,s);
    while (tt--)
    {
        /* code */
        getline(cin,s);
        // cout<<s<<endl;
        unordered_set<char>st;
        char q='A';
        cout<<char(q+32)<<endl;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')){
                st.insert(s[i]);
            }
            else if((s[i]>='A' && s[i]<='Z')){
                st.insert(s[i]-32);
            }
        }
        if(st.size()>=26){
            cout<<'~'<<endl;
        }
        else if(st.size()==0){
            cout<<"abc"<<endl;
        }
        else{
            for(char c='a';c<='z';c++){
                if(!st.count(c)){
                    cout<<c<<endl;
                    break;
                }
            }
        }
    }
    
}