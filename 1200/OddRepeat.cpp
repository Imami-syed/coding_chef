#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n , k, s;
        cin >> n >> k >> s;
        // n+k-1 integers
        // n +ve odd 1 time and 1 number K times 
        // sum int = s
        // first n odd numbers sum == n*2
        // ll rem = s-(n*n);
        // ll num = rem/(k-1);
        cout << (s-(n*n))/(k-1) << endl;
    }
    return 0;
}