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
        ll a[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<=i;j++)
            {
                cin >> a[i][j];
            }
        }
        ll dp[n][n];
        for(ll i=0;i<n;i++)
        {
            dp[n-1][i]=a[n-1][i];
        }
        for(ll i=n-2;i>=0;i--)
        {
            for(ll j=0;j<=i;j++)
            {
                dp[i][j]=a[i][j]+max(dp[i+1][j], dp[i+1][j+1]);
            }
        }
        cout << dp[0][0] << endl;
    }
    return 0;
}