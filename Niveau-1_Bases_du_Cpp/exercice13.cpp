#include <iostream>
//13. Échanger les valeurs de deux variables sans utiliser une troisième variable. 
using namespace std;

int main() {
    int x = 412;
    int y = 57438;
    y = x + y;
    x = y - x;
    y = y - x;
    cout << x << " " << y;
    return 0;
}