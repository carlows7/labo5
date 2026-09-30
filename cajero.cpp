#include <iostream>
using namespace std;
int main() {

    double saldo = 0;
    double monto;
    int opcion;

    do {
        cout << "\n=== CAJERO AUTOMATICO ===" << endl;
        cout << "Saldo actual: $" << saldo << endl;
        cout << "1. Ingresar dinero" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Cantidad a ingresar: $";
                cin >> monto;
                saldo += monto;
                cout << "Deposito exitoso." << endl;
                break;
            case 2:
                cout << "Cantidad a retirar: $";
                cin >> monto;
                
                if (monto > saldo) {
                    cout << "Fondos insuficientes." << endl;
                } else {
                    saldo -= monto;
                    cout << "Retiro exitoso." << endl;
                }
                break;
            case 3:
                cout << "Gracias por usar el cajero." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 3);

    return 0;
}