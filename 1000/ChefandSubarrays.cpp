#include <iostream>
using namespace std;
#define ll long long int
#define forinput(i,n) for(ll i=0;i<n;i++)
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        ll cnt=0;
        cin >> n;
        ll a[n];
        forinput(i,n)
            cin >> a[i];
        ll cs, cp;
        forinput(i,n){
            cs=0;cp=1;
            for(ll j=i; j<n;j++){
                cs+=a[j];
                cp*=a[j];
                if(cs==cp) cnt++;                
            }
        }
        cout << cnt << endl;
    }
    return 0;
}