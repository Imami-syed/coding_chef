#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int INTMAX= 2147483647 ;
    while(t--){
        int a,b;
        cin >> a >> b;
        // a -- limak , b -- bob;
        // print who wins
        int i=1; 
        int res=0;
        for(int i=0;i< 2147483647 ;i++){
            if(i%2!=0){
                if(a<i){
                    res=1;
                    break;
                }
                else{
                    a-=i;
                }
            }
            else if(i%2==0){
                if(b<i){
                    res=0;
                    break;
                }
                else{
                    b-=i;
                }
            }
        }
        if(res==1) cout << "Bob" << endl;
        else cout << "Limak" << endl;

    }
    return 0;
}