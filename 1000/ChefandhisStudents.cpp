#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
#define intmax INT32_MAX
int main(){
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll len = s.length();
        ll cnt=0;
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='<' && s[i+1] =='>') 
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}