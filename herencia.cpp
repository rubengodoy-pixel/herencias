#include <iostream>
#include <string>

using namespace std;

class Empleado
{
    protected:
    string nombre;
    double salario;

    public:
    Empleado(string n ,double s)
    {
        nombre = n;
        salario = s;

    }
    void mostrarDatos()
    {
        cout<< "nombre: "<< nombre << endl;
        cout << "Salario: $ " << salario << endl;

    }

    void trabajar()
    {
        cout << nombre << "El empleado esta trabajando" << endl;

    }

    
};

class Gerente : public Empleado
{
    private:
    string departamento;

    public:
    Gerente(string n, double s, string d) : Empleado(n , s)
    {
        departamento = d;
    }
    void mostrarGerente()
    {
        mostrarDatos();
        cout << "Departamento: " << departamento << endl;

    }
    void dirigir()
    {
        cout << nombre << "Esta supervisando el departamente de " << departamento << endl;

    }
    void supervisar()
    {
        cout << nombre << "esta supervisando el departamento de" << departamento << endl;
    }

};

int main()
{
    Empleado empleado1("Ana" , 8000);
    Gerente gerente1("Caelos", 15000, "Sistemas");

    cout << "DATOS DEL EMPLEADO" << endl;
    empleado1.mostrarDatos();
    empleado1.trabajar();
    cout << endl;
    cout << "DATOS DEL GERENTE" << endl;
    gerente1.mostrarGerente();
    gerente1.trabajar();
    gerente1.supervisar();
    return 0;

};