#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        // p1 - 1 pn - n 
        ll n;
        cin >> n;
        ll p[n];
        for(ll i=0;i<n;i++){
            cin >> p[i];
        }
        if(p[0]==1 && p[n-1]==n){
            cout << "0" << endl;
        }
        else if(p[0]==1 && p[n-1]!=n){
            for(ll j=0;j<n;j++){
                if(p[j]==n)
                {
                    cout << n-1-j << endl;
                    break;

                }
            }
        }
        else if(p[0]!=1 && p[n-1]==n){
            for(ll j=0;j<n;j++){
                if(p[j]==1)
                {
                    cout << j << endl;
                    break;

                }
            }
        }
        else{
            ll start=0,end=0;
            for(ll j=0;j<n;j++){
                if(p[j]==1)
                {
                    start=j;
                }
                if(p[j]==n){
                    end=j;
                }
            }
            if(start < end)
                cout << n-1-end+start << endl;
            else
                cout << n-1-end+start-1 << endl;


        }
    }
    return 0;
}