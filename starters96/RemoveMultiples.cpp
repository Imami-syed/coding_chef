#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m ;
        ll sum1=(n*(n+1))/2;
        ll sum2=0;
        ll temp;
        for(ll i=0;i<m;i++)
        {
            cin >> temp;
            sum2+=temp;
        }
        cout << sum1-sum2 << endl;
    }
    return 0;
}