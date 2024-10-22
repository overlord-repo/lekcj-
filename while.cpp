#include <iostream>
using namespace std;
double a = 1;
double b = 2;

int main()
{
    //słowa kluczowe: for, while, do while
    int i=0;
    while (i<5) { //pętla nieskonczona
        cout << (a++)*b++/a*100*b << "\n";
        i--;
    } 
    return 0;
}
