#include <iostream>
//20. Vérifier si un nombre est premier.  
using namespace std;

int main() 
    {int n;
    cout << "Entrez un nombre premier : ";cin >> n;
    if (n == 1 | n == 2 | n == 3 | n == 5 | n == 7) {cout << n << " est premier.";}
    else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0) {cout << n << " est premier.";}
    else {cout << n << " n'est pas premier.";}}