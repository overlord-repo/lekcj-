# Diagramy związków encje.
Obiekty świata rzeczywistego
- Obiekty materialne (realne, ludzi)
- Niematerialne (wiedza, zdarzenia)
- stany rzeczywistości
- zdarzenie
# Co to jest encja?
Reprezentuje zbiór obiektów opisany tymi samymi cechami (atrybutami, własnościami)
Informacje o tych obiektach będą przechowywane w bazie danych
Konkretny obiekt świata rzeczywistego jest reprezentowany jako wystąpienie encji (instancję encji)
# Modelowanie encji (1)
- Obiekty świata rzeczywistego
# Modelowanie encji (2)
Obiekty świata rzeczywistego
Parking firmy jest przeznaczony do parkowania wielu różnych samochodów. Chcemy przechowywać informacje o samochodach, które mogą tam się parkować.
## Wspólne cechy
Encja
Numer rejestracyjny
Imię
# Modelowanie encji:
1. Każda encja posiada – unikalną nazwę – zbiór cech (atrybutów)
2. Encje wchodzą w związki z innymi encjami – wyjątkiem są encje reprezentujące dane słownikowe i konfiguracyjne
3. Dowolna rzecz lub obiekt może być reprezentowana tylko przez jedną encję
4. Nazwa encji powinna być rzeczownikiem w liczbie pojedynczej
# Atrybuty encji
1. ID
atrybut lub zbiór atrybutów jednoznacznie identyfikujący wystąpienie encji
zbiór atrybutów + związki
związki
a) ID sztuczne
numer pozycji katalogowej, ID pracownika
Atrybuty encji – przykład
(#) - identyfikator encji (PESEL)
(*) adres – atrybuty z wartością obowiązkową
(*) pensja
o telefon – atrybut z wartością opcjonalną
# Związek
- Związek reprezentuje powiązania pomiędzy obiektami świata rzeczywistego
1. Klienci posiadają rachunki bankowe
2. Studenci otrzymują oceny z egzaminów
- W modelu ER(Model związków encji) związek łączy encje
- Związek z każdego końca posiada krótki opis ułatwiający interpretację związku
#Modelowanie związków (1)
Pracownik posiada samochód, samochód jest własnością pracownika (to jest opis związku)
# Modelowanie związków (2)
- Wiemy, że istnieje związek pomiędzy pracownikami a samochodami
- Chcielibyśmy wiedzieć
1. Ile samochodów może posiadać pracownik?
2. Ilu pracowników może posiadać ten sam samochód?
3. Czy każdy samochód musi do kogoś należeć?
4. Czy kazdy pracownik musi posiadć samochód?
[!TIP]
# Cechy związku
- Stopień związku
1. unarny (binarny rekursywny)
2. binarny
3. ternarny
4. n-arny
- Typ asocjacji (kardynalność)
1. 1:1 (jeden pracownik posiada jeden samochód)
2. 1:Wiele (pracownik ma dużo samochodów)
3. M:M (wiele do wiele)
- Istnienie
1. opcjonalny
2. obowiązkowy
# Cechy związku - przykład (1)
- Pracownicy firmy posiadają samochody (związek Pracownik - Samochód. stopień = Binarny)
- 1 pracownik 1 samochód (typ asocjacji 1:1)
- Nie każdy pracownik posiada samochód (Opcjonalny)
# Cechy związku - przykład (2)
- Związek binarny (dwie encje)
- Związek opcjonalny od strony pracownika
- Związek obowiązkowy od strony samochodu
- Związek 1:1
## Pracownik - - - - - - - -  ―――――――――――――――――――― Samochód
##             posiada(opcjonalny)    jest własnością(obowiązkowy)
Typ asocjacji 1:1 - przykład (1)
Związek binarny 1:1
Pracownicy:
- Jan
- Tomasz (kieruje windykacja(
- Hektor (Kretydy)
- Adam
## Pracownik ---- ――――― dział
## kieruje - jest kierowany przez
# Typ asocjacji 1:M (1)
- Związek binarny typu jeden do wielu 1:M
Każdy pracownik pracuje dokładnie w jednym dziale. Dział może zatrudniać wielu pracowników
Pracownicy:
- Jan (windykacja)
- Tomasz (windykacja)
- Hektor (Kretydy)
- Adam (Kredyty)
Pracowniki ――――――― ---- dział
# Typ asocjacji M:N (1)
Związek binarny typu M:N
- Pracownik może brać udział w jednym lub wielu projektach; może też nie brac udziału w żadnym projekcie. Każdy projekt realizuje przynajmniej jeden pracownik
Pracownik > może realizuje jeden/wielu projektów
Projekt musi być realizowany przez wielu pracowników
