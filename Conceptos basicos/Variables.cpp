#include <iostream>
using namespace std;

int main(){
    int numero1 = 20;
    char salir;

    cout << "Ingrese un numero: \n";
    cin >> numero1;

    float numero2 = 10.5;
    double numero3 = 22.2225;
    char letra = 'b';
    

    cout << "Su numero que se encuentra guardado es: " << numero1 << "\n";
    cout << numero2 << "\n";
    cout << numero3 << "\n";
    cout << letra << "\n";

    cout << "Presiona la tecla a para salir \n";
    cin >> salir;

    while(salir != 'a'){
        cout << "Presiona la tecla a para salir \n";
        cin >> salir;
    }
    cout<< "Gracias por usar el programa \n";

    return 0;
}