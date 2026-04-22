#include <iostream>
using namespace std;
class calculadora
{
    public:
    int sumar(int a, int b) {
        return a + b;
    }
    int sumar(int a, int b, int c) {
        return a + b + c;
    }
    int sumar(double a, double b) {
        return a + b;
    }
    int sumar(double a, double b, double c) {
        return a + b + c;
    }
};

int main()
{
    calculadora calc;
    cout<< "Suma de 2 enteros: " << calc.sumar(5 , 7) << endl;
    cout<< "Suma de 3 enteros: " << calc.sumar(5 , 7, 9) << endl;
    cout<< "Suma de 2 enteros: " << calc.sumar(5.5 , 7.5) << endl;
    cout<< "Suma de 3 enteros: " << calc.sumar(5.5 , 7.5 , 9.5) << endl;
}