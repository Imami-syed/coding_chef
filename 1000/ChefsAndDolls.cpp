#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j])
                a[i]=a[j]=-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0) cout << a[i] << endl;
        }
    }   
    return 0;
}