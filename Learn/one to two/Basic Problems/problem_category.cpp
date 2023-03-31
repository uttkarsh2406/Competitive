#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        int t;
        cin>>t;
        if(t<100){
            cout<<"Easy"<<endl;
        }
        else if(t<200){
            cout<<"Medium"<<endl;
        }
        else{
            cout<<"Hard"<<endl;
        }
    }
    
}