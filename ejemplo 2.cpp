#include <iostream>
#include <string>

using namespace std;
class Vehiculo

{
    protected:
    string marca;
    string modelo;
    int anio;
    public:

    Vehiculo(string _marca, string _modelo, int _anio)
    {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
    }
    void setMarca(string _marca)
    {
        marca = _marca;
    }
    void serModelo(string _modelo)
    {
        modelo = _modelo;
    }
    void setAnio(int _anio)
    {
        anio = _anio;
    }
    string getMarca()
    {
        return marca;
    }
    string getModelo()
    {
        return modelo;
    }
    int getAnio()
    {
        return anio;
    }
    void mostrarInformacion()
    {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
    }
    void encender()
    {
        cout << "El vehiculo esta encendido" << endl;
    }

};