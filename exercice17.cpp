#include <iostream>
#include <cstdlib>
#include <ctime>
//17. Générer un nombre aléatoire entre 1 et 100.  
using namespace std;

int main() {
    /* De base, randomNum prends une valeur au hasard
    et reste la même à chaque fois que l'on lance le code.
    Avec srand(time(0)), la valeur de randomNum change à chaque
    fois que l'on lance le code.*/ 
    srand(time(0)); 
    int randomNum = rand() % 100;
    cout << randomNum;
    return 0;
}