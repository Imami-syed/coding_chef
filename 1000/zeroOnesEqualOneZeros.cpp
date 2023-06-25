#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string res;
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==n-1){
                res += '1';
            }
            else{
                res+='0';
            }
        }
        cout << res << endl;
    }
    return 0;
}