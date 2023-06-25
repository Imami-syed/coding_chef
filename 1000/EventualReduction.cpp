#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans=true;
        if(n%2!=0){
            ans=false;
        }
        else{
            map <int, int> m;
            for(int i=0;i<n;i++){
                m[s[i]]++;
            }
            for(int i=0; i<n;i++){
                if(m[s[i]]%2!=0){
                    ans=false;
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout  << "NO" << endl;
    }
    return 0;
}