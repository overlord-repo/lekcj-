#include <iostream>
using namespace std;
double a = 1;
double b = 2;

int main()
{
    //słowa kluczowe: for, while, do while
    while (true) { //pętla nieskonczona
        cout << (a++)*b++/a*100*b;
    } 
    return 0;
}
