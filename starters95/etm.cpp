#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        int a[n], b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        int rem=0, it=0, power=0;
        if(n>m) {rem=n-m; it=n-rem;}
        else {rem=m-n;it=m-rem;}
        for(int i=0;i<it;i++){
            int maxa=0, maxb=0;
            for(int ai=0;ai<n;ai++){
                if(a[i]>maxa){
                    maxa=a[i];
                    a[i]=-1;
                }
            }
            for(int bi=0;bi<m;bi++){
                 if(b[i]>maxb){
                    maxb=b[i];
                    b[i]=-1;
                }
                maxb = maxb*h;
            }
           power+=min(maxa,maxb);
        }
        cout << power << endl;
    }
    return 0;
}