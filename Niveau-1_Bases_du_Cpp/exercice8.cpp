#include <iostream>
//8. Vérifier si un nombre est pair ou impair.  
using namespace std;

int main() {
    int nombre = 12;
    if (nombre%2 == 0) {
        cout << "Pair";
    } else {
        cout << "Impair";
    } return 0;
}