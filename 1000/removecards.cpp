#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map <int,int> m;
        for(int i=0;i<n;i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int c=0;
        for(int i=0;i<n;i++){
            c=max(m[a[i]], c);
        }
        cout << n-c << endl;
        
    }
    return 0;
}