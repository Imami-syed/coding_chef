#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n]={0};
        int b[n];
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        // b[i] = a[i] + a[i+1] % 2
        // b[n] = a[n]+a[1] % 2
        if(b[0] == 0) {
            a[0] = 2;
            a[1] = 2;
        }
        else if(b[0]==1){
            a[0]=2;
            a[1]=3;
        }
        for(int i=1;i<n;i++)
        {
            if(b[i] == 0 && a[i]==2){
                a[i+1]=2;
            }
            else if(b[i] == 0 && a[i]==3){
                a[i+1]=3;
            }
            else if(b[i] == 1 && a[i]==2){
                a[i+1]=3;
            }
            else if(b[i] == 1 && a[i]==3){
                a[i+1]=2;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        int check=-1;
        check=(a[0]+a[n-1])%2;
        if(b[n-1]==check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}