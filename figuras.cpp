#include <iostream>
using namespace std;
int main() {

    int opcion;
    const double PI = 3.1416;
    double radio, lado, base, altura;
    //se pide que ingrese la figura para calcular el area
    cout << "=== AREAS DE FIGURAS ===" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;
    
    //se ingresan los valores 
    switch (opcion) {
        case 1:
            cout << "Ingresa el radio: ";
            cin >> radio;
            cout << "Area del circulo: " << PI * radio * radio << endl;
            break;
        case 2:
            cout << "Ingresa el lado: ";
            cin >> lado;
            cout << "Area del cuadrado: " << lado * lado << endl;
            break;
        case 3:
            cout << "Ingresa la base: ";
            cin >> base;
            cout << "Ingresa la altura: ";
            cin >> altura;
            cout << "Area del triangulo: " << (base * altura) / 2 << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}