#include <iostream>
using namespace std;
void swap();
int a;
int b;

int main() {
    cout << "Podaj liczbę A:\n";
    cin >> a;
    cout << "Podaj liczbę B:\n";
    cin >> b;
    swap();
    return 0;
}

void swap() {
    cout << (a * b) / a << " A " << (a * b) / b << " B ";
}
