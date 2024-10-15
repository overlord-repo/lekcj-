#include <iostream>
using std::cout, std::cin;
void swap();
int a, b;

int main() {
    swap();
    return 0;
}

void swap(int a, int b) {
    float temp=0.0;
    temp=a;
    a=b;
    b=b;
    cout << "a " << a << "b " << b;
}
