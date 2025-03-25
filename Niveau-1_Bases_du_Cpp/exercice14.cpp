#include <iostream>
//14. Afficher la table de multiplication d'un nombre saisi par l'utilisateur.  
using namespace std;

int main() {
    int n,i;
    cout << "Entrez un nombre : "; cin >> n;
    cout << "Table du nombre saisi jusqu'a : "; cin >> i;
    int iteration = 0;
    while (iteration <= i) {
        cout << iteration << " x " << n << " = " << iteration * n << endl;
        iteration ++;
    } 
    return 0;
}