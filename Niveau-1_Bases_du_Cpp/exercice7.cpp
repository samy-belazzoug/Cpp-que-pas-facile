#include <iostream>
//7. Trouver le maximum entre deux nombres saisis par l'utilisateur.  
using namespace std;

int main() {
    int x,y;
    cout << "Entrez un nombre : ";cin >> x;
    cout << "Entrez un deuxième nombre : ";cin >> y;
    //methode facile
    cout << max(x,y);
    return 0;
}