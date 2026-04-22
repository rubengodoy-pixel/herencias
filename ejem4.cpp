#include <iostream>
#include <string>
using namespace std;

class Pedido
{
    public:
    void registrarPedido(string cliente, string producto, int cantidad)
    {
        cout << "Pedido registrado: " << endl;
        cout << "Cliente: " << cliente << endl;
        cout << "Producto: " << producto << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Tipo de pedido: basico" << endl;
        cout << endl;
    }
    void registrarPedido(string cliente, string producto, int cantidad, string direccion)
    {
        cout << "Pedido registrado: " << endl;
        cout << "Cliente: " << cliente << endl;
        cout << "Producto: " << producto << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Direccion de entrega: " << direccion << endl;
        cout << "Tipo de pedido: con envio" << endl;
        cout << endl;
    }
     void registrarPedido(string cliente, string producto, int cantidad, string direccion, double descuento)
    {
        cout << "Pedido registrado: " << endl;
        cout << "Cliente: " << cliente << endl;
        cout << "Producto: " << producto << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Direccion de entrega: " << direccion << endl;
        cout << "Descuento aplicado: " << descuento << endl;
        cout << "Tipo de pedido: con envio" << endl;
        cout << endl;
    }
}

int main()
{
    Pedido pedido1
    pedido1.registrarPedido("Juan Perez", "Laptop", 1);
    pedido1.registrarPedido("Juan Perez", "Laptop", 1, "calle falsa 123");
    pedido1.registrarPedido("Juan Perez", "Laptop", 1, calle falsa 123, 10.5);

}