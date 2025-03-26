#include <iostream>
//19. Écrire une fonction qui calcule la factorielle d’un nombre.  
using namespace std;

void factorielle(int n) 
    {if (n < 0) {cout << "Impossible.";}
    else if (n == 0) {cout << 1;}
    else 
    {int iteration = 1;
    int copy = iteration;
    for (iteration;iteration<n;iteration++) 
    {int iterationp1 = iteration + 1;
    int calcul = copy * iterationp1;
    copy = calcul;}
    cout << copy;}}

int main() {
    factorielle(7);
    return 0;
}