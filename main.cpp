#include <string>

#include "Algorithms.h"
#include "Controller.h"
#include "File_operation.h"
#include "time.h"


/*
 * Zasady dziłania programu:
 ----------------------------------------------------------------------------------------------------
  Program ma trzy plika .txt:

  Test_data.txt - plik którego używa program żeby odczytywać danne wpisane ręcznie przez użytkownika dla testowania.
  W tym pliku użytkonik musze zachować następne formatowanie (Pnazwa_processa: s=service_time a=waiting_time). W razie nie użycia
  tego formatowania program może być nie wstanie prawidlowo odczytać zawartość pliku.

  Tested_data.txt - plik w który program zapisuje dane użyte przy ostatnim testowaniu to mogą być dane wpisane przez
  użytkownika do pliku Test_data.txt lub dane wygenerowany przez program przy korzystaniu z odpowiedniej opcji w Menu.

  Results.txt - plik do którego program zapisuje wynniki algorytmów
----------------------------------------------------------------------------------------------------
  * Klasy:

   class Algorithms - zawiera funkcji dla wykonywania algorytmów FCFS i SJF
   class File_operation - zawiera funkcji dla odczytu i zapisu do plików
   class Controller - dostaje linki do obiektów klas "Algorithms" i "File_operation"
   i zarządza metodama tych obiektów. Również wyświetla Menu i komunikaty do konsoli.

   Dokładnejsze opisanie metod klas znajduje się w plikach nagłówkowych

 */

int main()
{
    srand(time(0));
    Algorithms a;
    File_operation file;
    Controller ctrl(a,file);

    while (ctrl.get_state() != STOP)
        ctrl.draw();

    return 0;
}
