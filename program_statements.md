c Program Statements
====================

01 Simple Ouput
---------------

Escribir un programa que repita 10 veces el nombre anexado
en la invocación de la linea de comandos.

Write down a program that outputs 10 times the name passed
as a parameter at command line invocation.

```bash
the_owl@eniac:~$ ./repeat "what does the fox say?"
```

02 Mean
-------

Calcular la media de 10 números proporcionados por el usuario.

Figure out the mean of 10 user given numbers.


Future Work
===========

```c
#include <iostream>
using namespace std;

int a = 1;
int f(int a) { return a; }
int g(int x = f(a)) { return x; }

int h() {
  a = 2;
  {
    int a = 3;
    return g();
  }
}

int main() {
  cout << h() << endl;
}
```
