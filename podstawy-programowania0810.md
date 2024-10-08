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
