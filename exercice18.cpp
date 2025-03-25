#include <iostream>
#include <cstdlib>
#include <ctime>
//18. Simuler le lancer d'un dé (nombre entre 1 et 6).  
using namespace std;

int main() {
    srand(time(0));
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int c = rand() % 6 + 1;
    int d = rand() % 6 + 1;
    int e= rand() % 6 + 1;
    cout << a << endl << b << endl << c << endl << d << endl << e << endl;
    return 0;
}
