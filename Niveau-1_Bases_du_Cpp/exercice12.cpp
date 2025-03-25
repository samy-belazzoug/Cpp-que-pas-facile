#include <iostream>
//12. Vérifier si un nombre est positif, négatif ou nul.  
using namespace std;

int main() {
    int n = 0;
    if (n > 0) {
        cout << "Positif";
    }
    else if (n == 0) {
        cout << "Nul";
    }
    else {
        cout << "Negatif";
    }
    return 0;
}