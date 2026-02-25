#include <iostream>
#include <string>
using namespace std;
int main() {
    string sustantivo;
    cout << "Ingrese un sustantivo: " << endl;
    cin >> sustantivo; 
    string verbo;
    cout << "Ingrese un verbo: " << endl;
    cin >> verbo;
    cout << "El " << sustantivo << " decidio " << verbo << " en la Luna!" << endl;
    return 0;
}