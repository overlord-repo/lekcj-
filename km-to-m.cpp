#include <iostream>
#include <string>
using namespace std;
double m, km;
string que;

int main()
{
    while (true) {
    cout << "m czy km? (napisz exit żeby zakończyć program)\n";
    cin >> que;
    if (que == "m"||que == "M"||que == "metrach"||que == "Metrach"||que == "metry"||que == "Metry") {
    cout << "Podaj liczbe w metrach na sekundę \n";
    cin >> m;
    cout << m << "m/s is " << m / 1000 * 3600 << "km/h" << "\n";
    } else if (que == "km"||que == "KM"||que == "kilometrach"||que == "Kilometrach"||que == "kilometry"||que == "Kilometry") {
    cout << "Podaj liczbe w kilometrach na godzine \n";
    cin >> km;
    cout << km << "km/h is " << km * 1000 / 3600 << "m/s" << "\n";
    } else if (que == "exit"|| que == "EXIT") {
    cout << "KONIEC PROGRAMU";
    break;
    } else {
    cout << "\nWybrałeś nieprawidłową opcję\n";
    }
    }
    return 0;
}
