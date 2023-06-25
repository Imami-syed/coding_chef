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
        ll a[n];
        ll tempmax=0;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]==0)
            {
                // ai < a(i+1);
                tempmax=i+1;
            }
            else if(s[i]==1)
            {
                // ai > a(i+1);
                tempmax=i;

            }
        }
        cout << tempmax+1 << endl;

    }
}