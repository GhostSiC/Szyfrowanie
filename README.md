# Szyfrowanie
Łańcuch s1 – jest tekstem do zaszyfrowania.
Łańcuch s2 – jest kluczem szyfrującym.
Łańcuchy s1 i s2 składają się jedynie z liter i spacji, są pozbawione wszystkich znaków interpunkcyjnych  i polskich liter (zastępujemy je literami pozbawionymi ogonków). Litery są więc ograniczone do alfabetu angielskiego. Jeżeli tekst jest długi i składa się z wielu zdań to trzeba przyjąć, że kropka zastępowana jest dwoma spacjami, czyli 1 spacja oddziela wyrazy a 2 spacje oddzielają zdania.

Szyfrowanie. Algorytm szyfrowania przebiega w następujących krokach.
1.	Zastępujemy litery liczbami. Jaki jest to zestaw liczb określacie Państwo samodzielnie.
2.	Kolejne znaki do zaszyfrowania (zastąpione liczbami) sumujemy z kolejnym znakiem klucza stosując sumowanie modulo n (n określacie Państwo tak aby wyniki mieściły się w zestawie znaków.
3.	Otrzymane liczby zastępujemy literami (jak w p.1) i otrzymany tekst, który jest tekstem zaszyfrowanym, wypisujemy na ekranie. 
