#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll tempmax=1;
        for(ll i=0;i<n-1;++i)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                tempmax++;
            }
        }
        cout << tempmax << endl;

    }
    return 0;
}