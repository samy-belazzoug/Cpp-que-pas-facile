#include <iostream>
//4. Écrire un programme qui additionne deux nombres entiers saisis par l'utilisateur.  
using namespace std;

int main() {
    int x,y;
    cout << "Entrez un premier nombre : ";
    cin >> x;
    cout << "Entrez un deuxième nombre : ";
    cin >> y;
    int calcul = x+y;
    cout << "Résultat : " << calcul;
    return 0;
}