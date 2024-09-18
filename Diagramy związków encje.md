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
* adres – atrybuty z wartością obowiązkową
* pensja
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

