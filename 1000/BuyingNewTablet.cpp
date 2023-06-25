#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b;
        cin >> n >> b;
        int w[n], h[n], p[n];
        for(int i=0;i<n;i++){
            cin >> w[i] >> h[i] >> p[i];
        }
        int area=-1;
        for(int i=0;i<n;i++)
        {
            if(p[i]<=b){
                area=max(area, h[i]*w[i]);
            }

        }
        if(area==-1) cout << "no tablet" << endl;
        else cout << area << endl;
    }
    return 0;
}