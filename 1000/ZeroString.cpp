#include <iostream>
using namespace std;
#define ll long long int 
#define outyes cout << "YES" << endl
#define outno cout << "NO" << endl
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ones=0, zeros=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0') zeros++;
            if(s[i]=='1') ones++;
        }
        ll cnt=0;
    
        if(zeros>=ones)
        {
            cnt+=ones;
        }
        else if(ones > zeros) {
            cnt+=zeros+1;
        }
        cout << cnt << endl;
    }
    return 0;
}