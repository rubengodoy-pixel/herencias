#include <iostream>
#include <string>
using namespace std;

class Impresora
{
    public:
    void imprimir(string texto)
    {
        cout << "Imprimiendo texto: " << texto << endl;

    }
    void imprimir(int numero)
    {
        cout << "Imprimiendo numero: " << numero << endl;
    }
    void imprimir(string text, int copias)
    {
        cout << "Imprimiendo: " << text << " en " << copias << " copias. " << endl;
    }

};

int main()
{
    Impresora impresora;
    impresora.imprimir("Hola, mundo!");
    impresora.imprimir(42);
    impresora.imprimir("Documento", 3);
    return 0;
}