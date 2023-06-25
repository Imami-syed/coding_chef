#include <iostream>
using namespace std;
int main(){
    int a=5,b=3,c=8, d;
    d = a | b;
    cout << "d = a | b  : " << d << endl;
    cout << "d | b : "  << (d | b) << endl; 
    cout << "d | a : "  << (d | a) << endl; 
    cout << "a | b : " << (a | b) << endl;
    cout << "0 | c: " << (0 | c) << endl;
    cout << "0 | b: " << (0 | b) << endl;
    cout << "0 | a: " << (0 | a) << endl;
    cout << "a | b | c  : " << (a | b | c) << endl;
    cout << "a | b | c: " << (d | c) << endl;
    cout << "a | b | c | 4: " << (d | c | 4) << endl;
    cout << "a | b | c | 17: " << (d | c | 17) << endl;
} 