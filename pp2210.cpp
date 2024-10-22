#include <iostream>
#include <cmath>
using namespace std;
float a,b,c;
bool function1();
void function2();
void function3();

int main() {
    cout << "Napisz a\n";
    cin >> a;
    cout << "Napisz b\n";
    cin >> b;
    cout << "Napisz c\n";
    cin >> c;
    function1();
    if (function1()) {
    function2();
    function3();
    } else {
    cout << "Nie można zbudować trójkąt";
    }
    return 0;
}

bool function1() {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
void function2() {
    cout << "Obwód jest " << a + b + c << "\n";
}
void function3() {
    float d = (a + b + c) / 2;
    cout << "Pole jest " << sqrt(d * (d - a) * (d - b) * (d - c)) << "\n";
}
