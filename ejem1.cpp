#include <iostream>
using namespace std;

//sobre carga
//
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
int main () 
{
    int a = 5, b = 7, c = 11;
    cout << add(a,b) << endl;
    cout << add(a, b ,c) << endl;
    return 0;
}