#include <iostream>
using namespace std;
#define ll long long int
#define outyes cout << "YES" << endl
#define outno cout << "NO" << endl

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if(a <=e || b <= e || c<=e)
        {
            if(a<=e && b+c <= d)
            {
                outyes;
            }
            else if(b<=e && a+c <= d)
            {
                outyes;
            }
            else if(c<=e && b+a <= d)
            {
                outyes;
            }
            else{
                outno;
            }
        }
        else{
            outno;
        }
    } 
    return 0;
}