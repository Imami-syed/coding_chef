#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x <= 3) cout << "BRONZE" << endl;
        else if (x<=6 && x>3) cout << "SILVER" << endl;
        else if(x>6) cout << "GOLD" << endl;
    }
    return 0;
}