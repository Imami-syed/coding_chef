#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int addy=0, om=0, count=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]==0){
                om=max(om,count);
                count=0;
            }
            else{
                count++;
            }
        }
        om=max(om,count);
        count=0;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                addy=max(addy, count);
                count=0;
            }
            else{
                count++;
            }
        }
        addy=max(addy, count);
        count=0;
        if(addy>om) cout << "Addy" << endl;
        else if(addy==om) cout << "Draw" << endl;
        else cout << "Om" << endl;
    }
    return 0;
}