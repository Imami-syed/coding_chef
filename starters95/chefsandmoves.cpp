#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    for(int x=0;x<n;x++){
        for(k=0;k<n;k++){
            x=__gcd(x,k);
        }
    }
}