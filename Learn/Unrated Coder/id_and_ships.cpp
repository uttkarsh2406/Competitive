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
        char c;
        cin>>c;
        if(c=='b' || c=='B'){
            cout<<"BattleShip"<<endl;
        }
        if(c=='c' || c=='C'){
            cout<<"Cruiser"<<endl;
        }
        if(c=='d' || c=='D'){
            cout<<"Destroyer"<<endl;
        }if(c=='f' || c=='F'){
            cout<<"Frigate"<<endl;
        }
    }
    
}