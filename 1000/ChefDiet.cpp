#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int grams=0;
        for(int i=0;i<n;i++)
        {
            grams+=a[i];
            if(grams>=k){
                grams-=k;
                if(i==n-1){
                    cout << "YES" << endl;
                }
            }
            else{
                cout << "NO " << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}