# Spis treści:
1. [podstawy-wczytywanie-wypisywanie](#podstawy-wczytywanie-wypisywanie)
2. [check-and-print oraz check-and-print-v2](#check-and-print-oraz-check-and-print-v2)
3. [check-and-print-with-flag](#check-and-print-with-flag)
4. [cmath-sqrt](#cmath-sqrt)
5. [switch-case](#switch-case)
6. [square-or-rectangle](#square-or-rectangle)
7. [drawing-patterns](#drawing-patterns)

## podstawy-wczytywanie-wypisywanie

Jest to program skupiający się na wczytywaniu i drukowaniu danych. Wykonuje takie działania jak: 
- Podstawowe operacje matematyczne, takie jak dodawanie, odejmowanie, mnożenie i dzielenie.
- Obliczanie pola i obwodu różnych figur geometrycznych.
- Analiza liczb: sprawdzanie parzystości, dodatności i ujemności liczb, obsługa operacji na liczbach, takie jak odwrotności oraz porównywanie ich wartości.
- Sprawdzanie przynależności do przedziału.
- Operacje na liczbach zmiennoprzecinkowych.

<img src="../images/podstawy1.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/podstawy-wczytywanie-wypisywanie.cpp)

[Wróć do spisu treści](#spis-treści)

## check-and-print oraz check-and-print-v2
Wypisywanie obliczeń w zależności od wartości liczb

Program prosi użytkownika o podanie trzech liczb całkowitych: a, b oraz c.

Następnie:
- Jeśli a == 1, wypisuje sumę b + c.
- Jeśli a == 3, wypisuje wartość c.
- Jeśli c jest parzyste, wypisuje wartość a.
- Jeśli c jest nieparzyste, wypisuje wynik dzielenia b / a (z przecinkiem).

Program check-and-print-v2 to bardziej zoptymalizowana wersja z flagą logiczną.

<img src="../images/check-and-print.png" width="300" />

[Zobacz kod programu check-and-print](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/check-and-print.cpp)

[Zobacz kod programu check-and-print-v2](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/check-and-print-v2.cpp)

[Wróć do spisu treści](#spis-treści)

## check-and-print-with-flag

Sprawdzanie liczb i wypisywanie symboli

Program prosi użytkownika o podanie trzech liczb całkowitych.
Następnie sprawdza następujące warunki:
- Jeśli pierwsza liczba (a) jest równa 1, program wypisuje symbol "*".
- Jeśli druga liczba (b) jest równa 3, program wypisuje symbol "#".
- Jeśli trzecia liczba (c) jest mniejsza od 7, program wypisuje symbol "+++".

Program może wypisać kilka symboli naraz, jeśli spełnionych jest kilka warunków jednocześnie.
Jeśli żaden z powyższych warunków nie zostanie spełniony, program wypisuje komunikat:
"Nie podales liczb uruchamiajacych program".

Dzięki temu użytkownik od razu wie, które liczby uruchamiają określone części programu.
Na końcu program wstrzymuje zakończenie, aby użytkownik mógł zobaczyć wynik przed zamknięciem konsoli.

Założeniem tego ćwiczenia było przećwiczenie stosowania **flagi logicznej (bool wypisano)** do sprawdzania, czy którykolwiek z warunków został spełniony, co jest przydatne w kontrolowaniu przepływu programu i zachowaniu czytelności kodu.

<img src="../images/flag.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/check-and-print-with-flag.cpp)

[Wróć do spisu treści](#spis-treści)

## cmath-sqrt

Obliczanie wartości funkcji f(x) = √x

Program prosi użytkownika o podanie liczby x, a następnie oblicza pierwiastek kwadratowy z tej liczby:
- Jeśli x < 0, informuje użytkownika, że nie pierwiastkujemy liczb ujemnych.
- Jeśli x >= 0, oblicza √x i wypisuje wynik z dokładnością do dwóch miejsc po przecinku.

Program został napisany w celu przećwiczenia:
- użycia funkcji sqrt() z biblioteki <cmath>,
- formatowania wyniku za pomocą fixed i setprecision(),
- kontroli poprawności danych wejściowych.

<img src="../images/cmath.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/cmath-sqrt.cpp)

[Wróć do spisu treści](#spis-treści)

## switch-case

Zamiana cyfry na słowo

Program prosi użytkownika o podanie jednej cyfry od 0 do 9,
a następnie wypisuje jej nazwę słowną, np.:
- dla 3 wypisze "trzy",
- dla 7 wypisze "siedem".

Jeśli użytkownik poda wartość spoza zakresu 0-9,
program informuje, że liczba jest nieprawidłowa.

Program został napisany w celu przećwiczenia stosowania instrukcji
**switch case** do wyboru działań w zależności od podanej wartości,
co ułatwia czytelność i organizację kodu przy wielu opcjach do obsłużenia.

<img src="../images/switch-case.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/switch-case.cpp)

[Wróć do spisu treści](#spis-treści)

## square-or-rectangle

Obliczanie pola i obwodu prostokąta lub kwadratu

Program prosi użytkownika o podanie dwóch liczb reprezentujących boki prostokąta (a i b),
a następnie:
- Sprawdza, czy boki są dodatnie (niezerowe), w przeciwnym razie wyświetla komunikat o błędzie.
- Oblicza pole i obwód figury na podstawie podanych boków.
- Jeśli oba boki są równe, program zakłada, że figura to kwadrat, w przeciwnym razie traktuje ją jako prostokąt.
- Wyświetla odpowiednie informacje o polu i obwodzie dla kwadratu lub prostokąta.

Program wykorzystuje:
- **Funkcje:** `isSquare()` do sprawdzenia, czy figura to kwadrat, `calculateArea()` do obliczenia pola oraz `calculatePerimeter()` do obliczenia obwodu.
- **Obsługę błędów** przy niepoprawnych danych wejściowych (boki ujemne lub zerowe).

Celem programu jest przećwiczenie użycia funkcji w celu **modularyzacji** kodu oraz **sprawdzania warunków** przy wprowadzaniu danych.

<img src="../images/square-or-rectangle.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/funkcje/square-or-rectangle.cpp)

[Wróć do spisu treści](#spis-treści)

## drawing-patterns

Program prosi użytkownika o podanie dwóch wartości:
1. Liczby `a` – określającej liczbę znaków w szlaczku (liczba dodatnia różna od 0).
2. Znaku `b` – z którego będzie zbudowany szlaczek.

Program działa w następujący sposób:
- Sprawdza, czy podana liczba `a` jest dodatnia i różna od 0. W przypadku niepoprawnej liczby (np. 0 lub liczba ujemna), wyświetla komunikat o błędzie.
- Następnie wywołuje funkcję `patterns`, która za pomocą pętli `for` rysuje szlaczek, wypisując znak `b` dokładnie `a` razy w jednej linii.
- Na końcu dodawana jest nowa linia.

Program wykorzystuje:
- **Funkcję `patterns()`**, która generuje szlaczek, powtarzając znak `b` określoną liczbę razy.
- **Sprawdzanie warunków wejściowych**, aby upewnić się, że liczba `a` jest dodatnia i większa od 0.
  
Program ćwiczy użycie funkcji, pętli oraz obsługi błędów przy wprowadzaniu danych.

<img src="../images/drawing-patterns1.png" width="300" /><img src="../images/drawing-patterns2.png" width="300" />

[Zobacz kod programu](https://github.com/RoxanaGrzywacz/cpp-learning-and-practicing/blob/main/podstawy/funkcje/drawing-patterns.cpp)

[Wróć do spisu treści](#spis-treści)