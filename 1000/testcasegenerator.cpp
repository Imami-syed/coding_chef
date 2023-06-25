#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cout <<  (rand()%t) << endl;
    }
}
