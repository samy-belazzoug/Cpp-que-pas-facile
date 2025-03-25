#include <iostream>
//15. Vérifier si un caractère saisi est une voyelle ou une consonne.  
using namespace std;

int main() {
    string c;
    cout << "Saisissez UNE lettre MINUSCULE : ";cin >> c;
    string result = (c == "a" or c == "e" or c == "i" or c == "o" or c == "u" or c == "y") ? "Voyelle" : "Consonne";
    cout << result;
    return 0;
}