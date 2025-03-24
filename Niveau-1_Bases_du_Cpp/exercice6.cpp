#include <iostream>
//6. Convertir un entier en flottant et l'afficher.  
using namespace std;

int main() {
    //C Style typecasting :
    int integer = 15;
    float flottant = (float) integer;
    cout << flottant << "\n";
    
    //Conversion implicite
    int x = 10;
    float y = x + 1.0 - 1.0;
    cout << y;
    return 0;
}