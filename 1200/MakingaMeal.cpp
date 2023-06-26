#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        ll a[6]={0}; // codechef c2 o1 d1 e2 h1 f1
        for(ll i=0;i<n;i++)
        {
            cin >> s;
            for(ll i=0;i<s.length();i++)
            {
                if(s[i]=='c') a[0]++;
                if(s[i]=='o') a[1]++;
                if(s[i]=='d') a[2]++;
                if(s[i]=='e') a[3]++;
                if(s[i]=='h') a[4]++;
                if(s[i]=='f') a[5]++;
            }
        }
        a[0]=a[0]/2;
        a[3]=a[3]/2;
        ll minm=INT64_MAX;
        for(ll i=0;i<6;i++)
        {
            minm=min(minm,a[i]);
            
        }
        cout << minm << endl;
        // complete meal - codechef

    }   
    return 0;
}