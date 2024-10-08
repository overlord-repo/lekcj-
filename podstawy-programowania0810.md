# Lekcja
```
#include <iostream>
using namespace std;
//deklaracja
float ms_to_kmh(float);

int main() {
    float v;
    cout<<"Podaj prędkość wyrazoną w m/s: ";
    cin>>v;
    cout<<ms_to_kmh(v)<< "km/h";
    return 0;
}
float ms_to_kmh(float v) {
    return v*3.6;
}

```
# żle
```
#include <iostream>
using namespace std;
float ms_to_km(float);
void ms_to_kmh_2(float);
void ms_to_kmh(float,float);

int main() {
    float v, wynik_kmh, ms, km;
    cout<<"Podaj prędkość wyrazoną w m/s: ";
    cin>>v;
    ms_to_kmh(ms,km);
    cout<<km;
    return 0;
}
float ms_to_kmh(float v) {
    return v*3.6;
}
void ms_to_kmh_2(float v) {
    cout<< v <<" m/s to km/h to: "<<v*3.6<<" km/h.";
}
void ms_to_kmh (float ms, float km) {
    km=ms*3.6;
}
```
# ja pierdole
```
#include <iostream>
using namespace std;
float ms_to_km(float);
void ms_to_kmh_2(float);
void ms_to_kmh(float,float&);
void ms_to_kmh_3(float&);

int main() {
    float v, wynik_kmh, ms, km;
    //cout<<v<<" to "<<v*3.6<<" km/h.";
    cout<<"Podaj prędkość wyrazoną w m/s: ";
    cin>>v;
    //cout<<v<<" m/s to: "<<v*3.6<<" km/h.";
    //ms_to_kmh(ms,km);
    //cout<<v<<" m/s to: "<<km<<" km/h";
    //ms_to_km(v,km);
    //ms_to_km_2(v);
    
    ms_to_kmh_3(v);
    //cout<<km;
    cout<<v<<" km/h";
    return 0;
}
float ms_to_kmh(float v) {
    return v*3.6;
}
void ms_to_kmh_2(float v) {
    cout<< v <<" m/s to km/h to: "<<v*3.6<<" km/h.";
}
void ms_to_kmh (float ms, float &km) {
    km=ms*3.6;
}
void ms_to_kmh_3 (float &v) {
    v=v*3.6;
}
```
# koniec
```
#include <iostream>
using namespace std;
//Deklaracja
bool bol(double,double,double);
bool bol_r(bool);

int main() {
    double bok1;
    double bok2;
    double bok3;
    cout << "Wpisz pierwszy bok \n";
    cin >> bok1;
    cout << "Wpisz drugi bok \n";
    cin >> bok2;
    cout << "Wpisz trzeci bok \n";
    cin >> bok3;
    bool bol_r = bol(bok1,bok2,bok3);
    if (bol_r) {
        cout << "można";
    } else {
        cout << "nie można";
    }
    return 0;
}
bool bol(double bok1, double bok2, double bok3) {
     return (bok1 + bok2 > bok3) && (bok1 + bok3 > bok2) && (bok2 + bok3 > bok1) && (bok1 > 0 && bok2 > 0 && bok3 > 0);
}
```
# KONIEC
```
#include <iostream>
using namespace std;
//Deklaracja
bool bol(double,double,double);

int main() {
    double bok1;
    double bok2;
    double bok3;
    cout << "Wpisz pierwszy bok \n";
    cin >> bok1;
    cout << "Wpisz drugi bok \n";
    cin >> bok2;
    cout << "Wpisz trzeci bok \n";
    cin >> bok3;
    
    if (bol(bok1,bok2,bok3)) {
        cout << "można";
    } else {
        cout << "nie można";
    }
    return 0;
}
bool bol(double bok1, double bok2, double bok3) {
     return (bok1 + bok2 > bok3) && (bok1 + bok3 > bok2) && (bok2 + bok3 > bok1) && (bok1 > 0 && bok2 > 0 && bok3 > 0);
}
```
