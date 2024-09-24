```
#include <iostream>
using namespace std;

int main()
{
    string imie, nazwisko;
    cout<<"Podaj imie"<<endl;
    cin>>imie;
    cout<<"nazwisko"<<endl;
    cin>>nazwisko;
    cout<<"Imie: "<<imie<<" nazwisko: "<<nazwisko<<endl;
    cout<<"Trzecia litera imienia to: "<<imie[2]<<" lub: "<<imie.at(2)<<" a perwsza litera nazwiska to: "<<nazwisko[0]<<endl;
    return 0;
}
```
