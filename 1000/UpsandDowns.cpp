#include <iostream>
#include <algorithm>
#define ll long long int 
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        // a[i] <= a[i+1] i-- even
        // a[i] >= a[i+1] i-- odd
        // a[0] <= a[1] >= a[2] <= a[3] >= a[4]
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0; i< n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        // 1 2 3 4 5 6 7 8 9 10 
        // 0 1 2 3 4 5 6 7 8 9 
        // 2 1 4 3  6 5  8 7 10 9
        for(ll i=0;i<n;i++){
            if(i%2==0 && a[i] > a[i+1]){
                swap(a[i], a[i+1]);
            }
            if(i%2==1 && a[i] < a[i+1]){
                swap(a[i], a[i+1]);
            }

        }
        
        for(ll i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    }
    return 0;
}