#include <iostream>
using namespace std;
int main() {

    char color;

    cout << "Ingresa un color (R, A, V): ";
    cin >> color;

    switch (color) {
        case 'R':
        case 'r':
            cout << "Alto" << endl;
            break;
        case 'A':
        case 'a':
            cout << "Precaucion" << endl;
            break;
        case 'V':
        case 'v':
            cout << "Avance" << endl;
            break;
        default:
            cout << "color no reconocido" << endl;
    }

    return 0;
}