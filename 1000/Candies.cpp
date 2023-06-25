#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m=2*n;
        int a[m];
        // valid if possible to make 2 arrays with 
        // length n all distinct
        for(int i=0;i<m;i++)
            cin >> a[i];
        int count=0;
        for(int i=0;i<m-1;i++)
        {
            count=0;
            for(int j=i;j<m;j++){
                if(a[i]==a[j])
                    count++;
            }
            if(count == 3) 
            {
                cout << "NO" << endl;
                break;
            }
        }
        if(count < 3) cout << "YES" << endl;
    }
    return 0;
}