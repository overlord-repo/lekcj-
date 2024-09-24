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
jak używamy Getline i Cin musimy napisać 
```
cin.ignore()
```
```
 
#include <iostream>
#include <string>
using namespace std;

// Function declarations
float oblicz_BMI(float, float);
string interpretuj_BMI_s(float);

int main() {
    float dwaga; // Waga
    float dwzrost; // Wzrost
    float BMI; // Indeks masy ciała
    float isdigit;

    cout << "Wpisz wagę KG: \n";
    cin >> dwaga; // Użyj cin do wczytywania liczby
    cout << "Wpisz wzrost M: \n";
    cin >> dwzrost; // Użyj cin do wczytywania liczby
    if (isdigit(dwaga[0]) && isdigit(dwzrost[0])) {
cout << "Podałeś: " <<stof(dwaga) << " KG, " <<stof(dwzrost) << " M" << endl;
// Function definitions
float oblicz_BMI(float dwaga, float dwzrost) {
    return dwaga / (dwzrost * dwzrost);
}

string interpretuj_BMI_s(float BMI) {
    if (BMI < 16) {
        return "Wygłodzenie";
    } else if (BMI < 17) {
        return "Wychudzenie";
    } else if (BMI < 18.5) {
        return "Niedowaga";
    } else if (BMI < 25) {
        return "Waga prawidłowa";
    } else if (BMI < 30) {
        return "Nadwaga";
    } else if (BMI < 35) {
        return "Pierwszy stopień otyłości";
    } else if (BMI < 40) {
        return "Drugi stopień otyłości";
    } else {
        return "Trzeci stopień otyłości";
    }
    }
    } else {
    cout<<"dane nie są liczbami";
    }
    }
    if (dwaga > 0 && dwzrost > 0) {
        BMI = oblicz_BMI(dwaga, dwzrost); // Wywołanie funkcji
        string komunikat = interpretuj_BMI_s(BMI); // Zmiana lokalna
        cout << "Twoje BMI to: " << BMI << " - " << komunikat << endl;
    } else {
        cout << "ŻLE: Wartości muszą być większe od zera odpowiedz nie może zawierać NIE liczby" << endl;
    }
    return 0; 
