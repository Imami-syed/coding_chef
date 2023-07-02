#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll res=0;
        for(ll i=n;i>=1;i--)
        {
            if(i==1)
            {
                res+=1;
            }
        }
    }
    return 0;
}