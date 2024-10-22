#include <iostream>
using namespace std;
int a = 1;
int b = 2;

int main()
{
    //słowa kluczowe: for, while, do while
    for(;;) { //pętla nieskonczona
        cout << (a++)*b++;
    } 
    return 0;
}
