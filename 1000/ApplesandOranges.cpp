#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int c=0;
        c=__gcd(m,n);
        cout << c << endl;    
    }
    return 0;
}