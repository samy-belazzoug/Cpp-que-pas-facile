#include <iostream>
//11. Calculer la somme des nombres de 1 à `n` (saisi par l'utilisateur).  
using namespace std;

int main() {
    int n;
    cout << "Veuillez entrer un nombre n : ";cin >> n;
    int iterator = 1;
    int copy = iterator;
    int somme = 2;
    while (iterator < n) {
        int s = copy + somme;
        copy = s;
        somme ++;
        iterator ++;
    }   
    cout << copy;
    return 0;
    
}