#include <iostream>
//16. Vérifier si une année est bissextile.  
using namespace std;

int main() {
    int n;
    cout << "Entrez une année : "; cin >> n;
    if (n%4 == 0) {
        cout << "Année bissextile";
    }
    else {
        cout << "Année non bissextile";
    }
}